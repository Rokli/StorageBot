#ifndef __BOT_H
#define __BOT_H

#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>
#include <string.h>

#define BUF_SIZE 1024

typedef struct Bot{
    char *token;
} Bot;

int createBot(Bot *bot, char *token);

int sendMessage(Bot *bot, char* message,char* userId);

int getUpdate(Bot *bot);

size_t writeCallback(void *ptr, size_t size, size_t nmemb, void *userdata);

#endif //__BOT_H