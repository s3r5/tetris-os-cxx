#ifndef SPEAKER_H
#define SPEAKER_H

#include "util.h"

#ifdef __cplusplus
extern "C" {
#endif

void speaker_note(u8 octave, u8 note);
void speaker_play(u32 hz);
void speaker_pause();

#ifdef __cplusplus
}
#endif

#endif
