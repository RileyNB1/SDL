#pragma once
#include <galaga/BackgroundStars.h>
#include <galaga/PlaySideBar.h>

namespace Galaga
{
	class Level : public GameEntity
	{
	private:
		Timer* mTimer;
		PlaySideBar* mSideBar;
		BackgroundStars* mStars;
		int mStage;
		bool mStageStarted;
	public:
		Level(int stage, PlaySideBar* sideBar);
		~Level();
		void Update() override;
		void Render() override;
	};
}