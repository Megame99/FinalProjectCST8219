// part1.c
//@author: Surbhi Bahri

#define _CRT_SECURE_NO_WARNINGS
#define _CRTDBG_MAP_ALLOC	// need this to get the line identification


//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF); // in main, after local declarations

//NB must be in debug build

#include <crtdbg.h>

#include <stdio.h>

#include <string.h>

typedef enum { FALSE = 0, TRUE } BOOL;

struct Frame {

	char* frameName;

	struct Frame* pNext;

};

typedef struct {
	char* animationName;
	struct Frame* frames;

}Animation;

// Forward declarations
void InitAnimation(Animation*);

void InsertFrame(Animation*);

void DeleteFrame(Animation*);
void EditFrame(Animation*);

void ReportAnimation(Animation*);

void CleanUp(Animation*);

int main(void)

{
	char response;

	BOOL RUNNING = TRUE;
	Animation RG;
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	InitAnimation(&RG);

	while (RUNNING)

	{

		printf("MENU\n 1. Insert a Frame at the front\n 2. Delete last Frame\n 3. Edit a Frame\n 4. Report the Animation\n 5. Quit\n"); scanf("%c", &response);

		switch (response)
		{
		case '1':InsertFrame(&RG); break;
		case '2':DeleteFrame(&RG); break;

		case '3':EditFrame(&RG); break;

		case '4':ReportAnimation(&RG); break;
		case '5':RUNNING = FALSE; CleanUp(&RG); break;

		default:printf("Please enter a valid option\n");

		}
	}
	return 0;
}

