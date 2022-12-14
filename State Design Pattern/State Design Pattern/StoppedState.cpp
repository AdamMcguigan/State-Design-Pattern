#include "StoppedState.h"
#include "MusicPlayer.h"

StoppedState::StoppedState()
	: MusicPlayerState(std::string("Stopped")) {
}

StoppedState::~StoppedState() {
}

void StoppedState::Play(MusicPlayer* player)
{
	player->SetState(MusicPlayer::ST_PLAYING);
}
