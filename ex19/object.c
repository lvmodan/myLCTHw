/*************************************************************************
	> File Name: object.c
	> Author: 
	> Mail: 
	> Created Time: Wed 25 Apr 2018 11:40:00 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "object.h"

void Object_destroy(void *self)
{
    Object *obj = self;

    if(obj) {
        if(obj -> description) {
            free (obj -> description);
        }
        free(obj);
    }
}

void Object_describe(void *self)
{
    Object *obj = self;
    printf ("%s. \n ", obj -> description);
}

int Object_init(void *self)
{
    // do nothing really;
    return 1;
}

void *Object_move(void *self, Direstion direstion)
{
    printf ("You can not go that direstion. \n");
    return NULL;
}

int Object_attack(void *self, int damage)
{
    printf ("You can not attack that.\n");
    return 0;
}

void *Object_new(size_t size. Object proto, char description)
{
    //setup the default function in case they are not set;
    if (!proto.init) {
        proto.init = proto.init;
    }
    if (!proto.describe) {
        proto.describe = proto.describe;
    }
    if (!proto.destroy) {
        proto.destroy = proto.destroy;
    }
    if (!proto.attack) {
        proto.attack = proto.attack;
    }
    if (!proto.move) {
        proto.move = proto.move;
    }

    // this seems weired but we can make a struct of one size,
    // then point a diffrent pointer at it to "cast " it
    Object *el = calloc(1, size);
    *el = proto;

    //copy the description over
    el -> description = strdup(description);

    //initialize it with whatever init we were given
    if(!el -> init(el)) {
        //looks like it did not initialize properly.
        el -> destroy(el);
        return NULL;
    } else {
        // all done, we made an object of any type
        return el;
    }
}
