#include "bot.h"


size_t writeCallback(void *ptr, size_t size, size_t nmemb, void *userdata) {

    printf("\n%.*s", (int)(size * nmemb), (char *)ptr);
    return size * nmemb;

}

int createBot(Bot *bot, char *token){

    strcpy(bot->token,token);
    return 1;

}


int sendMessage(Bot *bot, char* message, char* userId){
    return 0;
}

int getUpdate(Bot *bot){

    CURL *curl;
    CURLcode res;

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();

    char *urlTelegram = "https://api.telegram.org/bot";
    char *method = "/getUpdates";
    char url[BUF_SIZE];

    snprintf(url, sizeof url, "%s%s%s", urlTelegram,bot->token,method);
    printf("%s\n",url);

    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url);

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);

        res = curl_easy_perform(curl);
        
        if(res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }

        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();
    return 1;

}