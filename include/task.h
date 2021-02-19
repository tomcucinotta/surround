/*
 *	File Name: task.h
 *	Author: ckevar
 *	Created: Jan 26, 2020 at 09:59 PM
 */
#ifndef TASK_H
#define TASK_H 

#include "rw.h"
#include "definition.h"
#include "types.h"

#include <alsa/asoundlib.h>

// Alsa handlers
extern snd_pcm_t *cHandle;			// capture handler
extern snd_pcm_t *pbHandle;		// playback handler

// Variables
extern short bufRead[CHANNELS * M];	// buffer for capturing
extern short bufWrite[CHANNELS * M];	// buffer for playback
extern int readData, writeData;		// number of samples captured

extern struct BufferSem inBufferSem, outBufferSem;	// to synch tasks

extern unsigned short exitLoop;
extern unsigned char toggle;

// Functions
void initAlsa(const char *dev_name[], const unsigned fq, const unsigned c, const unsigned f);
void bufferSemInitAll();			// init semaphores

void *filterThread(void *arg);
void *captureThread(void *arg);
void *playbackThread(void *arg);


#endif
