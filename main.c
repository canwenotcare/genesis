#include <stdio.h>  /* In  */
#include <stdlib.h> /* the */
#include <time.h>   /*beginning, */
int main()			/* God created */
{   char* latency[] = { /* the heavens */
	"latency","agony","memory","jealousy","identity","authority","certainty","transparency",
	"analogy","conformity","fragility","serenity","tenacity","practicality","humility","epiphany",
	"complexity","simplicity","normality","absurdity","anxiety","sobriety","urgency","emergency",
	"ability","utility","affinity","concurrency","sympathy","apology","empathy","unity",
	"personality","mentality","hostility","expectancy","morality","complacency","hilarity","indignity",
	"humanity","fallacy","atrocity","severity","priority","necessity","reality","actuality",
	"mobility","possibility","responsibility","availability","camaraderie","policy","ubiquity","conspiracy",
	"harmony","family","secrecy","credibility","telepathy","legality","physicality","anonymity",
	"reciprocity","immortality","curiosity","notability","plausibility","deniability","vulnerability","security",
	"incredulity","integrity","antipathy","solidarity","energy","entropy","gravity","density",
	"technology","ecstasy","mimicry","destiny","enmity","amnesty","vanity","tragedy",
	"comedy","idolatry","prophecy","agency","divinity","virtuosity","subtlety","delivery",
	"liberty","anatomy","contingency","dependency","civility","liability","externality","monopoly",
	"society","nobility","democracy","autocracy","similarity","individuality","objectivity","subjectivity",
	"serendipity","synchronicity","ideaology","duplicity","obscurity","symbology","ideality","popularity",
	"celebrity","notoriety","fatality","brutality","biology","pathology","specificity","generality",
	"futility","radicality","rationality","generosity","sensibility","fantasy","anomaly","idiopathy",
	"novelty","tendency","formality","rigidity","finality","enemy","immutability","iniquity",
	"superficiality","honesty","solidity","fidelity","sensitivity","frigidity","duality","causality",
	"anisotropy","familiarity","scarcity","variety","fertility","vitality","primality","centrality",
	"frivolity","exclusivity","animosity","hospitality","reflexivity","suitability","selectivity","matrimony",
	"accuracy","uniformity","savagery","villainy","privacy","validity","posterity","history",
	"irony","originality","ontology","theology","virality","quotability","predictability","dependability",
	"stability","equity","generativity","regularity","ambiguity","discrepancy","frequency","modality",
	"chronology","autonomy","deformity","dexterity","numerosity","flexibility","nativity","gentility",
	"decency","community","naturality","warranty","damnability","cruelty","genealogy","opacity",
	"spontaneity","duty","chivalry","regency","majority","minority","anarchy","monarchy",
	"ordinality","cardinality","dichotomy","inanity","relativity","positivity","negativity","pity",
	"narrativity","naivete","irritabiity","ferocity","apathy","supremacy","polarity","subsidy",
	"visibility","ethnicity","morphology","etymology","antiquity","futurology","intimacy","sanity",
	"mockery","flattery","psychopathy","sociopathy","safety","morbidity","infancy","maturity",
	"monstrosity","presentability","neutrality","potency","insanity","pedantry","diversity","bigotry"};
	typedef struct AGONY {  /* and the earth. */
							struct AGONY *d;	
							struct AGONY *b;	
							struct AGONY *l;	
							int latency;			/* Now */
							struct AGONY *r;	
							struct AGONY *f;	
							struct AGONY *u;	
						} agony;
	agony* memory = malloc(sizeof(agony));memory->latency=0; /* the earth */
	agony* jealousy; /*was*/
	agony* certainty; /* formless*/
	char* identity = latency[0];/*and*/
	char* authority = latency[0]; /* empty, */
	while(memory->latency < 255){					/* darkness */
		 jealousy = malloc(sizeof(agony));	/* was */
		certainty = memory;					/* over */
		jealousy->latency = memory->latency + 1;	/* the surface */
		while(memory!=jealousy){					/* of the deep, */
			identity = latency[memory->latency];				/* and the spirit */
			authority =latency[jealousy->latency];			/* of God */
			while(identity[0]==authority[0]){identity++;authority++;}   /* was hovering */
			if(authority[0]>identity[0]){							/* over the waters. */
				if (memory->r==certainty){							/* And God said */
					memory->r=jealousy;jealousy->r=certainty;	   /* "Let  */
					certainty->l=jealousy;jealousy->l=memory;	   /* there */
					memory=jealousy;							   /* be	*/
				} else if (memory->r==NULL){					   /* light" */
					memory->r=jealousy;jealousy->r=NULL;		/* and there */
					jealousy->l=memory;memory=jealousy;			/*  was  */
				} else {									/* light.	*/
					certainty=memory;memory=memory->r;  /* God */
				}
			} else {									/* saw  */
				if (memory->l==certainty){				/* that the light   */
					memory->l=jealousy;jealousy->l=certainty;   /* was good,	*/
					certainty->r=jealousy;jealousy->r=memory;   /* and he separated */
					memory=jealousy;					/* the light	*/
				} else if (memory->l==NULL){		/*  from */
					memory->l=jealousy;jealousy->l=NULL;	/* the darkness. */
					jealousy->r=memory;memory=jealousy; /* God called */
				} else {									/* the light */
					certainty=memory;memory=memory->l;  /* "day",*/
				}/*and*/
			}/*the*/
		}	/* darkness*/
	}/*he called */
	agony* transparency = memory; /* "night".	*/
	while(transparency->l != NULL)  /*And */
		transparency = transparency->l;  /* there was */
	certainty = memory = transparency;				/* evening,*/
	while(memory != NULL){	  /* and*/
		memory->f=NULL;/*there was*/
		certainty=memory;memory=memory->r; /* morning - */
	}transparency->l=certainty;/*the*/
	certainty->r=transparency;/*first*/
	int analogy = (int)clock(); /*day.*/
	char* conformity = latency[analogy % 256]; /*And God said,*/
	char*  fragility = latency[(analogy >> 8)%256]; /*Let there be*/
	for(memory=transparency;memory->f==NULL;memory=memory->r){/*a*/
		memory->f=malloc(sizeof(agony));/*vault*/
	    identity=latency[memory->l->latency];/*between*/
		authority=latency[memory->latency];/*the waters*/
		memory->f->f=NULL; memory->f->b=memory;memory->f->latency=1;/*to*/
		while(identity[0]==authority[0]){/*separate*/
			authority+=1;/*water*/
			memory->f->latency+=1;/*from*/
			identity+=1;/*water."*/
		} /*So*/
		if(memory->l->f!=NULL){/*God*/
			memory->f->l=memory->l->f;/*made*/
			memory->l->f->r=memory->f;/*the*/
		}/*vault*/
	} /*and*/
	memory->l->f->r=memory->f; /*separated*/
	memory->f->l=memory->l->f;/*the*/
	char* serenity[256];/* water*/
	for(memory=transparency->f;memory->latency!=0;memory=memory->r){/*under*/
		serenity[memory->b->latency]=malloc(memory->latency+1);/*the*/
		identity=serenity[memory->b->latency]+(memory->latency);/*vault*/
		authority=latency[memory->b->latency]+(memory->latency);/*from*/
		for(identity[0]=0;memory->latency>0;memory->latency-=1){/*the*/
				identity-=1;authority-=1;/*waters*/
				identity[0]=authority[0];/*above*/
		} /*it.*/
	} /*And*/
	for(memory=transparency;memory->f->latency==0;memory=memory->r){/*it*/
		for(authority=serenity[memory->latency];/*was*/
				authority[0]!=0;authority+=1){/*so.*/
				printf("%c",authority[0]); /*God*/
				memory->f->latency+=1;/*called*/
		}/*the*/
	printf("\t0x%2x\t%3i\t%s\n",memory->latency,memory->latency,latency[memory->latency]);/*vault*/
	}/*"sky."*/
	analogy = (int)clock() - analogy; /*And there was evening, */
	printf("\nHello, world!\n\nTwo words: %s %s.\n",conformity,fragility);/* and there was morning - */
	int tenacity = latency[analogy % 256]; /*the  */
	int practicality = latency[(analogy >> 8)%256]; /*second*/
	printf("\nTwo better words: %s %s.\n\nLove,\n\nmain.c\n\n\n\n\n\n\n\n\n ",tenacity,practicality);/*day.*/
	return (0);
}