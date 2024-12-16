/*
** EPITECH PROJECT, 2024
** Bootstrap-My_radar
** File description:
** create_circle
*/
#include "include/csfml_include.h"
#include "include/my.h"
#include "include/my_graphical.h"
#include "include/struct_fb.h"

sfCircleShape *create_circle(sfVector2f position, float radius,
    struct csfml_var *csfml_var)
{
    csfml_var->circle = sfCircleShape_create();
    csfml_var->color.r = randint(0, 255);
    csfml_var->color.g = randint(0, 255);
    csfml_var->color.b = randint(0, 255);
    csfml_var->color.a = 0;
    sfCircleShape_setPosition(csfml_var->circle, position);
    sfCircleShape_setOutlineColor(csfml_var->circle, csfml_var->color);
    sfCircleShape_setRadius(csfml_var->circle, radius);
    sfCircleShape_setOutlineThickness(csfml_var->circle, 1);
    sfRenderWindow_drawCircleShape(csfml_var->window, csfml_var->circle, 0);
    return 0;
}