/*
 *	File Name: gui.h
 *	Author: ckevar
 *	Created: Jan 27, 2020 at 09:09 AM
 */
#ifndef GUI_H
#define GUI_H 

#include <ncurses.h>

// Windows
extern WINDOW *selectorContainer;
extern WINDOW *selector;

// Geometrical features
extern int LEN_CONTAINER, POSX_CONTAINER;
extern int LEN_SELECTOR, POSX0_SELECTOR, POSX1_SELECTOR, POSX2_SELECTOR; 
extern int POSX_STEREO, POSX_FRONT, POSX_SURROUND; 

void initGui(char const *dev_names[]);		// init interface
void refreshGui();	// updates screen
void killGui(); 	// deallocate used memory

void toogleSelectorGui(unsigned char t);

#endif
