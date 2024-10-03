#include <stdio.h>
#include "bot/bot.h"


int main(){
    Bot *bot;
    createBot(bot,"8063267211:AAEGMNCSCAxR3I8B1VW9Vpt1kfY7rFLXGSk");

    printf("Hello, i am server for telegram bot!\n");
    getUpdate(bot);
    return 0;
}