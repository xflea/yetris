#include <Game/PieceGhost.hpp>
#include <Config/Globals.hpp>

PieceGhost::PieceGhost():
	Piece(Piece::MAX, 0, 0)
{
	// must be here
	this->block = Globals::Profiles::current->settings.theme.ghost;
}
void PieceGhost::update(Piece* master, Board* board)
{
	this->x = master->getX();
	this->y = master->getY();
	this->type = master->getType();
	this->rotation = master->getRotation();

	board->hardDrop(this);
}

