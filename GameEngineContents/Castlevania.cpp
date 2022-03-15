#include "CastlevaniaGame.h"
#include "PlayLevel.h"
#include "EndingLevel.h"
#include "TitleLevel.h"

CastlevaniaGame::CastlevaniaGame()
{
}

CastlevaniaGame::~CastlevaniaGame()
{
}

void CastlevaniaGame::GameInit()
{
	// ¼÷Á¦
	//char Arr[10] = "Title";
	//"Title" == Arr;

	CreateLevel<TitleLevel>("Title");
	CreateLevel<PlayLevel>("Play");
	CreateLevel<EndingLevel>("Ending");
	ChangeLevel("Title");
}

void CastlevaniaGame::GameLoop()
{

}
void CastlevaniaGame::GameEnd()
{

}