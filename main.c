#include <stdio.h>  /* In  */
#include <stdlib.h> /* the beginning, */
int main()			/* God created */
{   char* latency[] = { /* the heaven */
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
	agony* memory = malloc(sizeof(agony));memory->latency=0; /* the earth was formless*/
	memory->d=memory->b=memory->l=memory->r=memory->f=memory->u=NULL; /* and empty */
	while(memory->latency < 255){					/* darkness */
		agony* jealousy = malloc(sizeof(agony));	/* was */
		agony* certainty = memory;					/* over */
		jealousy->latency = memory->latency + 1;	/* the surface */
		while(memory!=jealousy){					/* of the deep */
			char* identity = latency[memory->latency];				/* and the spirit */
			char* authority =latency[jealousy->latency];			/* of God */
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
				}
			}
		}						/*   and the darkness he called  */
		
	}
	agony* transparency = memory;						/*  "night".	*/
	while(transparency->l != NULL) transparency = transparency->l;  /* And there was evening, */
	memory = transparency;				/* and there was morning -	*/
	
	while(memory != NULL){	  /* - the first  */
		printf("%2X\t%3d\t%s\t\n",memory->latency,memory->latency,latency[memory->latency]);memory=memory->r; /* day. */
	}

	return (0);
}
