#pragma once
#include <GameEngine/GameEngine.h>

class CastlevaniaGame : public GameEngine
{
public:
	// constrcuter destructer
	CastlevaniaGame();
	~CastlevaniaGame();

	// delete Function
	CastlevaniaGame(const CastlevaniaGame& _Other) = delete;
	CastlevaniaGame(CastlevaniaGame&& _Other) noexcept = delete;
	CastlevaniaGame& operator=(const CastlevaniaGame& _Other) = delete;
	CastlevaniaGame& operator=(CastlevaniaGame&& _Other) noexcept = delete;

	void GameInit() override;
	void GameLoop() override;
	void GameEnd() override;

protected:

private:

};

