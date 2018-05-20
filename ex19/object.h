/*************************************************************************
	> File Name: object.h
	> Author: 
	> Mail: 
	> Created Time: Wed 25 Apr 2018 11:25:22 PM CST
 ************************************************************************/

#ifndef _OBJECT_H
#define _OBJECT_H

typedef enum {
    NORTH, SOUTH, EAST, WEST
} Direction;

typedef struct {
    char *description;
    int (*init)(void *self);
    void (*describe)(void *self);
    void *(*move)(void *self, Direction direction);
    void (*destroy)(void *self);
    int (*attack)(void *self, int damage);
} Object;

int Object_init(void *self);
void Object_destroy(void *self);
void Object_describe(void *self);
void *Object_move(void *self, Direction direction);
int Object_attack(void self, int damage);
void *Object_new(size_t size, Object proto, char *description);

#define NEW(T, N) Object_new(sizeof(T), T##Proto, N)
#define _(N) proto.N

#endif
