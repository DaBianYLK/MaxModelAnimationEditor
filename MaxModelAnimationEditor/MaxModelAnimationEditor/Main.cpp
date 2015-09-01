#include <fstream>
#include <stdio.h>

using namespace std;


struct MaxAnimation {
	char name[256];
	unsigned int startFrame;
	unsigned int frameNum;
};

void main() {
	ofstream modelFile;
	modelFile.open("D:\\Human.model", ios::app | ios::binary);

	unsigned int animationNum = 20;

	MaxAnimation* animations = new MaxAnimation[animationNum];
	
	strcpy(animations[0].name, "stand");
	animations[0].startFrame = 6;
	animations[0].frameNum = 40;

	strcpy(animations[1].name, "stand-weapon");
	animations[1].startFrame = 745;
	animations[1].frameNum = 40;

	strcpy(animations[2].name, "special-stand");
	animations[2].startFrame = 104;
	animations[2].frameNum = 95;

	strcpy(animations[3].name, "special-stand-weapon");
	animations[3].startFrame = 207;
	animations[3].frameNum = 71;

	strcpy(animations[4].name, "run");
	animations[4].startFrame = 286;
	animations[4].frameNum = 22;

	strcpy(animations[5].name, "run-weapon");
	animations[5].startFrame = 316;
	animations[5].frameNum = 22;

	strcpy(animations[6].name, "hit-weapon");
	animations[6].startFrame = 346;
	animations[6].frameNum = 17;

	strcpy(animations[7].name, "hit-weapon");
	animations[7].startFrame = 370;
	animations[7].frameNum = 17;

	strcpy(animations[8].name, "attack");
	animations[8].startFrame = 394;
	animations[8].frameNum = 16;

	strcpy(animations[9].name, "attack-weapon");
	animations[9].startFrame = 421;
	animations[9].frameNum = 31;

	strcpy(animations[10].name, "dead");
	animations[10].startFrame = 465;
	animations[10].frameNum = 37;

	strcpy(animations[11].name, "skill-fnyj01");
	animations[11].startFrame = 508;
	animations[11].frameNum = 15;

	strcpy(animations[12].name, "skill-fnyj02");
	animations[12].startFrame = 535;
	animations[12].frameNum = 20;

	strcpy(animations[13].name, "skill-fnyj03");
	animations[13].startFrame = 566;
	animations[13].frameNum = 27;

	strcpy(animations[14].name, "skill-fkyj");
	animations[14].startFrame = 605;
	animations[14].frameNum = 24;

	strcpy(animations[15].name, "skill-fyjt");
	animations[15].startFrame = 637;
	animations[15].frameNum = 22;

	strcpy(animations[16].name, "skill-frlw");
	animations[16].startFrame = 666;
	animations[16].frameNum = 30;

	strcpy(animations[17].name, "stand-attack");
	animations[17].startFrame = 700;
	animations[17].frameNum = 38;

	strcpy(animations[18].name, "skill-js");
	animations[18].startFrame = 815;
	animations[18].frameNum = 25;

	strcpy(animations[19].name, "skill-hycj");
	animations[19].startFrame = 845;
	animations[19].frameNum = 35;

	modelFile.write((char*)&(animationNum), sizeof(unsigned int));
	modelFile.write((char*)animations, sizeof(MaxAnimation) * animationNum);

	modelFile.close();
}