/* Programa para calcular quanto de Mana e HitPoints algumas as vocações do tibia podem ter. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void sumonar (int);
void experiencia(int,int);
void CalculadoraTibiana(void);
/* Funções das Magias da 4 vocações */
void MagiaKnight(int);
void MagiaSorc(int);
void MagiaDruid(int);
void MagiaPally(int);
//void Pesquisa Monstros(void);



main ()
{
     int inicial;
     printf ("&&&&&&&&&&&&&&&&&&&&&&\nMONSTROS (1)\nCALCULADORA TIBIANA (2)\n&&&&&&&&&&&&&&&&&&&&&&\n? ");
     scanf ("%d",&inicial);
     printf ("\n\n");
     system("cls");
     if (inicial ==2)
        CalculadoraTibiana();
     else
        // PesquisaMonstros();
     getch();
}
     
/* Monstros que os players podem sumonar 

0 - Chicken
1 - Rabbit
2 - Dog
3 - Sheep
4 - Black Sheep
5 - Parrot
6 - Flamingo
7 - Deer
8 - Pig
9 - Seagull
10 - Husky
11 - Silver Rabbit
12 - Cat
13 - Squirrel
14 - Penguin
15 - Skunk
16 - Badger
17 - Rat
18 - Bat
19 - Cave Rat
20 - Wolf
21 - Hyaena
22 - Winter Wolf
23 - Panda
24 - Bear
25 - Polar Bear
26 - Crab
27 - Lion
28 - Crocodile
29 - Tiger
30 - Terror Bird
31 - Blood Crab
32 - Elephant
33 - Green Frog
34 - Snake
35 - Spider
36 - Bug
37 - Poison Spider
38 - Wasp
39 - Centipede
40 - Cobra
41 - Larva
42 - Scorpion
43 - Toad
44 - Tarantula
45 - Scarab
46 - Smuggler
47 - Wild Warrior
48 - Amazon
49 - Nomad
50 - Bandit
51 - Valkyrie
52 - Monk
53 - Dwarf
54 - Dwarf Soldier
55 - Dwarf Guard
56 - Elf
57 - Elf Scout
58 - Minotaur
59 - Minotaur Archer
60 - Minotaur Guard
61 - Goblin
62 - Orc
63 - Orc Spearman
64 - Orc Warrior
65 - Orc Berserker
66 - Orc Leader
67 - Island Troll
68 - Troll
69 - Frost Troll
70 - Swamp Troll
71 - Troll Champion
72 - Frost Giantess
73 - Stone Golem
74 - Cyclops
75 - Skeleton
76 - Ghoul
77 - Demon Skeleton
*/

/* Função que mostra quais monstros você pode sumonar com sua quantidade de mana. */
void sumonar (int mana)
{
    char *Reserva[77];
    int temp[77];
    char *MONSTROS[] = {"Chicken","Rabbit","Dog","Sheep","Black Sheep","Parrot","Flamingo","Deer","Pig","Seagull",
    "Husky","Silver Rabbit","Cat","Squirrel","Penguin","Skunk","Badger","Rat","Bat","Cave Rat","Wolf","Hyaena",
    "Winter Wolf","Panda","Bear","Polar Bear","Crab","Lion","Crocodile","Tiger","Terror Bird","Blood Crab",
    "Elephant","Green Frog","Snake","Spider","Bug","Poison Spider","Wasp","Centipede","Cobra","Larva","Scorpion",
    "Toad","Tarantula","Scarab","Smuggler","Wild Warrior","Amazon","Nomad","Bandit","Valkyrie","Monk","Dwarf",
    "Dwarf Soldier","Dwarf Guard","Elf","Elf Scout","Minotaur","Minotaur Archer","Minotaur Guard","Goblin","Orc",
    "Orc Spearman","Orc Warrior","Orc Berserker","Orc Leader","Island Troll","Troll","Frost Troll","Swamp Troll",
    "Troll Champion","Frost Giantess","Stone Golem","Cyclops","Skeleton","Ghoul","Demon Skeleton" };
    int MANA[] = {220,220,220,250,250,250,250,260,220,220,290,200,200,200,250,250,255,275,260,300,300,255,250,
    420,220,315,305,320,350,420,490,505,500,250,205,210,250,270,280,335,275,355,310,400,485,395,390,420,390,420,
    450,450,600,320,360,650,320,360,330,390,550,290,300,310,360,590,640,290,290,300,320,340,490,490,590,300,450,
    620,530,690};
    int i;
    printf ("\n     ||||VOCE PODE SUMONAR||||\n");    
    for (i = 0; i <= 76;++i)
    {
        if (mana > MANA[i])
        {
           printf ("       %-16s\t%4d\n",MONSTROS[i],MANA[i]);         
        }   
    } 
    printf ("     ||||VOCE PODE SUMONAR||||\n\n\n");  
}

/* Função para calcular quanto falta para passar de level, se necessário. */
void experiencia (int exp, int lvl)
{
     long int Niveis[] = {0,0,100,200,400,800,1500,2600,4200,6400,9300,13000,17600,23200,29900,37800,47000,57600,69700,83400,98800,
     116000,135100,156200,179400,204800,232500,262600,295200,330400,368300,409000,452600,499200,548900,601800,658000,717600,780700,
     847400,917800,992000,1070100,1152200,1238400,1328800,1423500,1522600,1626200,1734400,1847300,1965000,2087600,2215200,2347900,
     2485800,2629000,2777600,2931700,3091400,3256800,3428000,3605100,3788200,3977400,4172800,4374500,4582600,4797200,5018400,
     5246300,5481000,5722600,5971200,6226900,6489800,6760000,7037600,7322700,7615400,7915800,8224000,8540100,8864200,9196400,
     9536800,9885500,10242600,10608200,10982400,11365300,11757000,12157600,12567200,12985900,13413800,13851000,14297600,14753700,
     15219400,15694800,16180000,16675100,17180200,17695400,18220800,18756500,19302600,19859200,20426400,21004300,21593000,22192600,
     22803200,23424900,24057800,24702000,25357600,26024700,26703400,27393800,28096000,28810100,29536200,30274400,31024800,31787500,
     32562600,33350200,34150400,34963300,35789000,36627600,37479200,38343900,39221800,40113000,41017600,41935700,42867400,43812800,
     44772000,45745100,46732200,47733400,48748800,49778500,50822600,51881200,52954400,54042300,55145000,56262600,57395200,58542900,
     59705800,60884000,62077600,63286700,64511400,65751800,67008000,68280100,69568200,70872400,72192800,73529500,74882600,76252200,
     77638400,79041300,80461000,81897600,83351200,84821900,86309800,87815000,89337600,90877700,92435400,94010800,95604000,97215100,
     98844200,100491400,102156800,103840500,105542600,107263200,109002400,110760300,112537000,114332600,116147200,117980900,119833800,
     121706000,123597600,125508700,127439400,129389800,131360000,133350100,135360200,137390400,139440800,141511500,143602600,
     145714200,147846400,149999300,152173000,154367600,156583200,158819900,161077800,163357000,165657600,167979700,170323400,172688800,
     175076000,177485100,179916200,182369400,184844800,187342500,189862600,192405200,194970400,197558300,200169000,202802600,205459200,
     208138900,210841800,213568000,216317600,219090700,221887400,224707800,227552000,230420100,233312200,236228400,239168800,242133500,
     245122600,248136200,251174400,254237300};
     int i;
     int resultado = Niveis[lvl+1] - Niveis[lvl];
     if (exp  > Niveis[lvl]) 
     {
             printf("Voce ja  esta neste Level!\n");
     }
     else 
     {
          printf("Faltam %d de experiencia para voce ir para o level desejado!\n",Niveis[lvl] - exp);
     }
}

/* Função da calculadora Tibiana */
void CalculadoraTibiana (void)
{
     int mana = 35, hitpoints = 185, level, cap = 470, exp;
     char vocacao;
     printf ("|||||||||||||||||||||||||||||||||||||||||||||||||\n");
     printf ("||||| - CALCULADORA TIBIANA by: Sabaratth - |||||\n");
     printf ("|||||||||||||||||||||||||||||||||||||||||||||||||\n\n");
     printf ("Qual a sua vocacao?\nSorcerer(s), Druid(d), Paladin(p) , Knight(k)?\n? ");
     fflush(stdin);
     scanf ("%c", &vocacao);
     fflush(stdin);
     tolower(vocacao);
     printf ("Qual o level desejado?\n? ");
     scanf ("%d",&level);
     fflush(stdin);
     printf ("E quanto de Exp voce tem hoje em dia?\n? ");
     scanf ("%d",&exp);
     fflush(stdin);
     printf ("\n\n");
     system("cls");
     if (exp >= 0)
     {
        if (vocacao == 'k')
        {
                 mana += 5 * (level - 8);
                 hitpoints += 15 * (level - 8);
                 cap += 25 * (level - 8);
                 printf ("\n\n                    |||Magias que pode usar|||\n");
                 printf("-----------------------------------------------------------------\n");
                 printf("      %-20s%-25s%-10s\n","NOME","O QUE DIZER","CUSTO");
                 MagiaKnight(level);
                 printf("-----------------------------------------------------------------\n");
                 printf ("\n\nNo level %d voce tera:\nVida: %d\nMana: %d\nCap: %d\n",level , hitpoints , mana,cap);
                 experiencia(exp,level);
        }
        if (vocacao == 's')
        {
                 mana += 30 * (level - 8);
                 hitpoints += 5 * (level - 8);
                 cap += 10 * (level - 8);
                 printf ("\n\n                    |||Magias que pode usar|||\n");
                 printf("-----------------------------------------------------------------\n");
                 printf("      %-20s  %-24s%-10s\n","NOME","O QUE DIZER","CUSTO");
                 MagiaSorc(level);
                 printf("-----------------------------------------------------------------\n");
                 sumonar(mana);
                 printf ("No level %d voce tera:\nVida: %d\nMana: %d\nCap: %d\n",level , hitpoints , mana,cap);
                 experiencia(exp,level);
        }        
        if (vocacao == 'd')
        {
                 mana += 30 * (level- 8);
                 hitpoints += 5 * (level - 8);
                 cap += 10 * (level - 8);
                 printf ("\n\n                    |||Magias que pode usar|||\n");
                 printf("--------------------------------------------------------------------\n");
                 printf("      %-20s     %-24s  %-10s\n","NOME","O QUE DIZER","CUSTO");
                 MagiaDruid(level);
                 printf("--------------------------------------------------------------------\n");
                 sumonar(mana);
                 printf ("No level %d voce tera:\nVida: %d\nMana: %d\nCap: %d\n",level , hitpoints , mana,cap);
                 experiencia(exp,level);
                 
         }
        if (vocacao == 'p')
        {
                 mana += 15 * (level - 8);
                 hitpoints += 10 * (level - 8); 
                 cap += 20 * (level - 8);
                 printf ("\n\n                      |||Magias que pode usar|||\n");
                 printf("-----------------------------------------------------------------\n");
                 printf("      %-20s    %-24s%-10s\n","NOME","O QUE DIZER","CUSTO");
                 MagiaPally(level);
                 printf("-----------------------------------------------------------------\n");
                 printf ("\n\nNo level %d voce tera:\nVida: %d\nMana: %d\nCap: %d\n",level , hitpoints , mana,cap);
                 experiencia(exp,level);
        }
     }
     else
            printf ("Otário.");
     printf ("\n\n|||||||||||||||||||||||||||||||||||||||||||||||||\n");
     printf ("||||| - CALCULADORA TIBIANA by: Sabaratth - |||||\n");
     printf ("|||||||||||||||||||||||||||||||||||||||||||||||||\n\n");
     printf ("\n\nPrecione Enter para continuar...");
     getch();
}

/* Função para ver quais magias o Knight de certo level pode usar. */
void MagiaKnight(int lvl)
{
     char *spellsKina[] = {"Find Person","Light","Magic Rope","Light Healing","Antidote","Levitate","Great Light",
     "Haste","Whirlwind Throw","Challenge","Wound Cleansing","Groundshaker","Berserk","Fierce Berserk"};
     char *invoc[] = {"exiva","utevo lux","exani tera","exura","exana pox","exani hur","utevo gran lux","utani hur",
     "exori hur","exeta res","exana mort","exori mas","exori","exori gran"};
     int custo[] = {20,20,20,20,30,50,60,60,40,30,65,160,120,340};
     int lvlminimo[] = {8,8,9,9,10,12,13,14,15,20,30,33,35,70};
     int i;
     for (i = 0 ; i <= 13; ++i)
     {
        if (lvl >= lvlminimo[i])
           printf ("       * %-20s* %-23s%-15d\n",spellsKina[i],invoc[i],custo[i]);
     }
             
}

/* Função para ver quais magias o Paladin de certo level pode usar. */
void MagiaPally (int lvl)
{
     
     char *spellsPally[] = {"Find Person","Light","Magic Rope","Light Healing","Antidote","Intense Healing",
     "Levitate","Great Light","Magic Shield","Haste","Food","Ultimate Healing","Ethereal Spear","Invisible",
     "Divine Healing","Divine Missile","Enchant Spear","Divine Caldera","Conjure Arrow","Poison Arrow",
     "Destroy Field","Conjure Bolt","Desintegrate","Conjure Sniper Arrow","Explosive Arrow","Conjure Piercing Bolt",
     "Power Bolt"};
     char *invoc[] = {"exiva","utevo lux","exani tera","exura","exana pox","exura gran","exani hur","utevo gran lux",
     "utamo vita","utani hur","exevo pan","exura vita","exori con","utana vid","exura san","exori san","exeta con",
     "exevo mas san","exevo con","exevo con pox","adito grav","exevo con mort","adito tera","exevo con hur",
     "exevo con flam","exevo con grav","exevo con vis"};
     int lvlminimo[] = {8,8,9,9,10,11,12,13,14,14,14,20,23,35,35,40,45,50,13,16,17,17,21,24,25,33,59};
     int custo[] = {20,20,20,20,30,70,50,60,50,60,120,160,35,440,210,20,350,180,100,130,120,140,200,160,290,180,700};
     int i ;
     for (i = 0; i <= 26 ;++i)
     {
         if (lvl >= lvlminimo[i])
            printf ("       * %-22s* %-23s%-15d\n",spellsPally[i],invoc[i],custo[i]);
     }
}

/* Função para ver quais magias o Sorcerer de certo level pode usar. */
void MagiaSorc (int lvl)
{
     char *spellsSorc [] = {"Find Person","Light","Magic Rope","Light Healing","Antidote","Intense Healing","Energy Strike",
     "Levitate","Great Light","Terra Strike","Flame Strike","Magic Shield","Haste","Ice Strike","Death Strike","Fire Wave",
     "Strong Haste","Ultimate Healing","Creature Illusion","Energy Beam","Summon Creature","Ultimate Light",
     "Cancel Invisibility","Great Energy Beam","Invisible","Energy Wave","Enchant Staff","Rage of the Skies","Hell's Core",
     "Poison Field","Light Magic Missile","Fire Field","Destroy Field","Energy Field","Desintegrate","Stalagmite",
     "Heavy Magic Missile","Fireball","Animate Dead","Firebomb","Soulfire","Thunderstorm","Poison Wall","Great Fireball",
     "Explosion","Magic Wall","Fire Wall","Energybomb","Energy Wall","Sudden Death"};
     char *invoc[] = {"exiva","utevo lux","exani tera","exura","exana pox","exura gran","exori vis","exani hur",
     "utevo gran lux","exori tera","exori flam","utamo vita","utani hur","exori frigo","exori mort","exevo flam hur",
     "utani gran hur","exura vita","utevo res ina","exevo vis lux","utevo res","utevo vis lux","exana ina",
     "exevo gran vis lux","utana vid","exevo vis hur","exeta vis","exevo gran mas vis","exevo gran mas flam",
     "adevo grav pox","adori min vis","adevo grav flam","adito grav","adevo grav vis","adito tera","adori tera",
     "adori vis","adori flam","adana mort","adevo mas flam","adevo res flam","adori mas vis","adevo mas grav pox",
     "adori mas flam","adevo mas hur","adevo grav tera","adevo mas grav flam","adevo mas vis","adevo mas grav vis",
     "adori gran mort"};
     int lvlminimo[] = {8,8,9,9,10,11,12,12,13,13,14,14,14,15,16,18,20,20,23,23,25,26,26,29,35,38,41,55,60,14,15,15,17,18,21,
     24,25,27,27,27,27,28,29,30,31,32,33,37,41,45};
     int custo[] = {20,20,20,20,30,70,20,50,60,20,20,50,60,20,20,25,100,160,100,40,0,140,200,110,440,170,80,650,1200,200,
     120,240,120,320,200,350,350,460,600,600,600,430,640,530,570,750,780,880,1000,985,};
     int i ;
     for (i = 0; i <= 50; ++i)
     {
         if (lvl >= lvlminimo[i])
            printf ("       * %-20s* %-23s%-15d\n",spellsSorc[i],invoc[i],custo[i]);
            
     }
}

void MagiaDruid (int lvl)
{
     char *spellsDruid [] = {"Find Person","Light","Magic Rope","Light Healing","Antidote","Intense Healing","Energy Strike",
     "Levitate","Great Light","Terra Strike","Flame Strike","Magic Shield","Haste","Food","Ice Strike","Death Strike",
     "Heal Friend","Ice Wave","Strong Haste","Ultimate Healing","Creature Illusion","Summon Creature","Ultimate Light",
     "Wild Growth","Undead Legion","Invisible","Mass Healing","Tera Wave","Wrath of Nature","Eternal Winter","Poison Field",
     "Light Magic Missile","Fire Field","Antidote Rune","Intense Healing Rune","Convince Creature","Destroy Field",
     "Energy Field","Desintegrate","Stalagmite","Ultimate Healing Rune","Heavy Magic Missile","Animate Dead","Soulfire",
     "Chameleon","Icicle","Stone Shower","Poison Wall","Avalanche","Explosion","Fire Wall","Energy Wall","Paralyze"};
     char *invoc[] = {"exiva","utevo lux","exani tera","exura","exana pox","exura gran","exori vis","exani hur",
     "utevo gran lux","exori tera","exori flam","utamo vita","utani hur","exevo pan","exori frigo","exori mort",
     "exura sio","exevo frigo hur","utani gran hur","exura vita","utevo res ina","utevo res","utevo vis lux",
     "exevo grav vita","exana mas mort","utana vid","exura gran mas res","exevo tera hur","exevo gran mas tera",
     "exevo gran mas frigo ","adevo grav pox","adori min vis","adevo grav flam","adana pox","adura gran","adeta sio",
     "adito grav","adevo grav vis","adito tera","adori tera","adura vita","adori vis","adana mort","adevo res flam",
     "adevo ina","adori frigo","adori mas tera","adevo mas grav pox","adori mas frigo","adevo mas hur","adevo mas grav flam",
     "adevo mas grav vis","adana ani"};
     int lvlminimo[] = {8,8,9,9,10,11,12,12,13,13,14,14,14,14,15,16,18,18,20,20,23,25,26,27,30,35,36,38,55,60,14,15,15,15,15,
     16,17,18,21,24,24,25,27,27,27,28,28,29,30,31,33,41,54};
     int custo[] = {20,20,20,20,30,70,20,50,60,20,20,50,60,120,20,20,140,25,100,160,100,0,140,220,500,440,150,210,770,1200,
     200,120,240,200,120,200,120,320,200,350,400,350,600,600,600,460,430,640,530,570,780,1000,1400};
     int i ;
     for (i = 0; i <= 52; ++i)
     {
         if (lvl >= lvlminimo[i])
                 printf ("       * %-23s* %-25s%-10d\n",spellsDruid[i],invoc[i],custo[i]);
         
     }
}

