#include "SDL/SDL.h"
/*================rawr_soul================*/
typedef struct rawr_soul{struct rawr_soul* mind; struct rawr_soul* kind;} rawr_soul;
/*========rawr_born========*/
rawr_soul *rawr_born(rawr_soul* rawr_mind, rawr_soul* rawr_kind)
{rawr_soul* rawr_edge = (rawr_soul*)malloc(sizeof(rawr_soul));
rawr_edge->mind = rawr_mind;rawr_edge->kind = rawr_kind;return(rawr_edge);}
/*========rawr_save========*/
void rawr_save(rawr_soul* rawr_kind)
{rawr_soul* rawr_help = rawr_kind->mind;
rawr_kind->mind = rawr_born(rawr_help,NULL);
rawr_kind->mind->kind = rawr_born(rawr_help,rawr_kind->mind);}
/*========rawr_grow========*/
void rawr_grow(rawr_soul* rawr_self)6
{rawr_soul* rawr_best = rawr_self->kind;
rawr_self->kind = rawr_born(rawr_best->mind,rawr_best);
rawr_best->mind = rawr_born(rawr_best->mind,NULL);
rawr_best->mind->kind = rawr_born(rawr_best->mind->mind,rawr_best->mind);}
/*================rawr_body================*/
typedef struct rawr_body {struct rawr_body* body;struct rawr_soul* soul;int tone; int span;} rawr_body;
/*========rawr_earn========*/
void rawr_earn(rawr_body* rawr_spot,rawr_soul* rawr_give,int rawr_tone, int rawr_span)
{rawr_body* rawr_take = rawr_spot->body;
rawr_spot->body=(rawr_body*)malloc(sizeof(rawr_body));
rawr_spot->body->body=rawr_take;rawr_spot->body->soul=rawr_give;
rawr_spot->body->tone=rawr_tone;rawr_spot->body->span=rawr_span;}
/*========rawr_exit========*/
void rawr_exit(){SDL_Quit();}
/*========rawr_call========*/
void rawr_voice(void* rawr_heart,Uint8* rawr_mouth,int rawr_breath){}
/*================rawr_main================*/
int main(int argc,char *argv[]){SDL_Surface *rawr_face;
char rawr_nametag[]="rawr";int rawr_alert=1; atexit(rawr_exit);
/*====rawr_genesis====*/
rawr_body* rawr_8chu = (rawr_body*)malloc(sizeof(rawr_body));
rawr_soul* rawr_ateu = (rawr_soul*)malloc(sizeof(rawr_soul));
rawr_soul* rawr_8you = rawr_born(rawr_ateu,rawr_ateu);
rawr_ateu->mind = rawr_8you;rawr_ateu->kind = rawr_8you;
rawr_8chu->body = rawr_8chu;rawr_8chu->soul = rawr_ateu;
rawr_8chu->tone = 64;rawr_8chu->span = 32768;
rawr_earn(rawr_8chu,rawr_8you,32,65536);

SDL_AudioSpec rawr_throat;
rawr_throat.freq = 44100;
rawr_throat.format = AUDIO_S16;
rawr_throat.channels = 2;
rawr_throat.samples = 512;
rawr_throat.callback = rawr_voice;
rawr_throat.userdata = (void*)rawr_8chu;
SDL_Init(SDL_INIT_VIDEO);rawr_face=SDL_SetVideoMode(640,480,0,SDL_HWPALETTE);SDL_WM_SetCaption(rawr_nametag,NULL);
while(rawr_alert==1)
{SDL_Delay(16);SDL_Event rawr_event;
	while(SDL_PollEvent(&rawr_event))
	{	switch(rawr_event.type)
		{case SDL_QUIT:exit(0);break;
		case SDL_KEYDOWN:
			switch(rawr_event.key.keysym.sym)
			{case SDLK_ESCAPE:exit(0);break;
			default:break;}break;}}}exit(0);}


