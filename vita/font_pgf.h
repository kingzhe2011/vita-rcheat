#ifndef __FONT_PGF_H_
#define __FONT_PGF_H_

#include <stdint.h>

void font_pgf_init();
void font_pgf_finish();
int font_pgf_char_glyph(uint16_t code, const uint8_t **lines, int *pitch, uint8_t *realw, uint8_t *w, uint8_t *h, uint8_t *l, uint8_t *t);
int font_pgf_loaded();

#endif
