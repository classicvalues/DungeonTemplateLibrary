﻿#include <array>
#include "DTL.hpp"

int main() {

	using dungeon_t = bool;
	std::array<std::array<dungeon_t, 128>, 128> matrix{ {} };
	dtl::generator::terrain::stl::SimpleCellularAutomatonIsland<dungeon_t> a(matrix,200);

	dtl::file::write::stl::objBoard<dungeon_t>(matrix, "write_board_test_2.obj", 5, 1);

	dtl::console::output::stl::stringBool(matrix, "##", "//");

	return 0;
}