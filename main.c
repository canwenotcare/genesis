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
				memory->f->latency+=1;/*God called*/
		}/*the vault*/
	}/*"sky."*/
	analogy = (int)clock() - analogy; /*And there was evening, */
	printf("\nHello, world!\n\nTwo words: %s %s.\n",conformity,fragility);/* and there was morning - */
	int tenacity = analogy % 256;identity=latency[tenacity]; /*the  */
	int practicality = (analogy >> 8)%256;authority=latency[practicality]; /*second*/
	printf("\nTwo better words: %s %s.\n\nLove,\n\nmain.c\n",identity,authority);/*day.*/
	char* humility[256]; /*And God said*/
	for(memory=transparency;/* "Let*/
			memory->f->f==NULL;/* the*/
			memory=memory->r){/*water*/
		memory->f->f=malloc(sizeof(agony));/*under*/
		jealousy=memory->f->f;jealousy->f=NULL;/*the*/
		jealousy->b=memory->f;jealousy->l=memory->f->l->f;/*sky*/
		if(jealousy->l!=NULL)jealousy->l->r=jealousy;jealousy->latency=0;/* be*/
		for(identity=latency[memory->latency]+(memory->f->latency);/*gathered*/
				identity[0]!=0;identity+=1)/*to*/
			jealousy->latency+=1;/*one*/
		humility[memory->latency]=malloc(jealousy->latency);/*place*/
		identity=humility[memory->latency];/*and*/
		for(authority=latency[memory->latency]+(memory->f->latency);/*let*/
			authority[0]!=0;authority+=1){/*dry*/
			identity[0]=authority[0];identity+=1;/*ground*/
		}/*appear."*/
		identity[0]=0;/*And*/
	}/*it*/
	memory->f->f->l=memory->l->f->f;/*was*/
	memory->l->f->f->r=memory->f->f;/*so.*/
	typedef struct {int latency;
								int serenity;
								int humility;
								} epiphany;
	typedef struct COMPLEXITY {
								epiphany* simplicity;
								struct COMPLEXITY* a;
								struct COMPLEXITY* o;
								struct COMPLEXITY* d;
								} complexity;
	complexity* simplicity= NULL;
	complexity* normality[256];
	complexity* absurdity = NULL;
	epiphany* anxiety=NULL;
	for(memory=transparency;memory->f->f->f==NULL;memory=memory->r){
		absurdity=normality[memory->latency] = malloc(sizeof(complexity));
		anxiety=absurdity->simplicity=malloc(sizeof(epiphany));
		anxiety->latency=memory->latency;
		anxiety->serenity=memory->f->latency;
		anxiety->humility=memory->f->f->latency;
		jealousy=memory->f->f->f=malloc(sizeof(agony));
		jealousy->latency = (( (256 + anxiety->serenity) - anxiety->humility)*256*256)+256*(anxiety->serenity > anxiety->humility ? anxiety->humility : anxiety->serenity)+anxiety->latency; 
		jealousy->b=memory->f->f;jealousy->l=jealousy->b->l->f;
		if(jealousy->l!=NULL)jealousy->l->r=jealousy;
	}memory->f->f->f->l=memory->l->f->f->f;
	memory->l->f->f->f->r=memory->f->f->f;
	memory=transparency;
	int sobriety=0;
	do{
		if(memory->f->f->f->latency > sobriety){
			jealousy=memory;
			sobriety=memory->f->f->f->latency;
		} memory=memory->r;
	} while(memory!=transparency);
	simplicity=normality[jealousy->latency];
	anxiety=simplicity->simplicity;
	int urgency=sobriety;
	do{
		sobriety=0;
		simplicity->a=simplicity->o=simplicity->d=NULL;
		memory=transparency;
		do{
			if(memory->f->f->f->latency < urgency)
			if(memory->f->f->f->latency > sobriety){
				sobriety=memory->f->f->f->latency;
				absurdity=normality[memory->latency];
			} memory=memory->r;
		}while(memory!=transparency);
		if(sobriety>0){
			if(urgency-(urgency%(256*256))>sobriety-(sobriety%(256*256))){
					if(urgency-(urgency%(256*256*256))>sobriety-(sobriety%(256*256*256))){
						simplicity=simplicity->d=absurdity;
					} else {
					simplicity=simplicity->o=absurdity;
					}
			} else {
			simplicity=simplicity->a=absurdity;
			}
		}
		urgency=sobriety;
	}while(urgency>0);
simplicity=normality[anxiety->latency];
do{
	printf("%s ",latency[simplicity->simplicity->latency]);
	if(simplicity->a!=NULL){
		simplicity->o=simplicity->d=simplicity;
		absurdity=simplicity=simplicity->a;
	} else if(simplicity->o!=NULL){
		simplicity->a=simplicity->d=simplicity;
		absurdity=simplicity=simplicity->o;
		printf("\n\nOUTWARD:\n\n");
	} else if(simplicity->d!=NULL){
		simplicity->a=simplicity->o=NULL;
		absurdity=simplicity=simplicity->d;
		printf("\n\nDOWN:\n\n");
	} else simplicity=NULL;
} while(simplicity!=NULL);
simplicity=normality[anxiety->latency];

return (0);
}