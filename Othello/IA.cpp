//#include "IA.h"
//#include "Heuristic.h"
//
//
////This struct represents a line of play.
//struct Line {
//	int movesNumber = 0;
//	uint64_t moves[64];
//};
////The principal variation obtained after a search. The first move 
////is the move for the computer.
//Line principalVariation;
//
//int negamaxAlphaBeta(Board& board, int depth, int alpha, int beta, Line& pv) {
//	Line line;
//	if (board.isGameComplete()) return pv.movesNumber = 0, board.gameValue();
//	if (depth == 0) return pv.movesNumber = 0, Heuristic::eval(board);
//	int res = -INF;
//	uint64_t moves = board.getPossibleMoves(board.currentPlayer());
//	vector<uint64_t> movesList = board.bitboardToList(moves);
//	for (const uint64_t move : movesList) {
//		uint64_t stonesToFlip = board.makeMove(move);
//		int v = -negamaxAlphaBeta(board, depth - 1, -beta, -alpha, line);
//		board.backMove(stonesToFlip, move);
//		if (v >= beta) return v;
//		alpha = max(alpha, v);
//		if (v > res) {
//			pv.moves[0] = move;
//			memcpy(pv.moves + 1, line.moves, line.movesNumber * sizeof(uint64_t));
//			pv.movesNumber = line.movesNumber + 1;
//			res = v;
//		}
//	}
//	return res;
//}
//
//int negamaxAlphaBeta(Board& board) {
//	return negamaxAlphaBeta(board, 8, -INF, INF, principalVariation);
//}