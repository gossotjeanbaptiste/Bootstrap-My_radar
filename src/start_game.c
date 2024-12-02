/*
** EPITECH PROJECT, 2024
** Bootstrap-My_radar
** File description:
** start_game
*/
#include "../include/my.h"
#include "../include/my_graphical.h"
#include "../include/struct_fb.h"
#include "../include/csfml_include.h"

int start_game(struct csfml_var *csfml_var)
{
    if (!csfml_var->window)
        return EXIT_FAILURE;
    while (sfRenderWindow_isOpen(csfml_var->window))
    {
        /* Process events */
        while (sfRenderWindow_pollEvent(csfml_var->window, &csfml_var->event))
        {
            /* Close window : exit */
            if (csfml_var->event.type == sfEvtClosed)
                sfRenderWindow_close(csfml_var->window);
        }
        sfRenderWindow_clear(csfml_var->window, sfBlack);
        sfRenderWindow_display(csfml_var->window);
    }
    sfRenderWindow_destroy(csfml_var->window);
    return EXIT_SUCCESS;
}
