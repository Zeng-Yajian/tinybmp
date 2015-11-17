/* Copyright (C)
* 2015 - ZengYajian
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*
*/

#include <stdio.h>
#include <stdlib.h>

#include "src/libbmp.h"

int main(int argc, char **argv)
{
	class libbmp *image;
	int x, y;

	if (argc < 4) return 0;

	sscanf(argv[2], "%d", &x);
	sscanf(argv[3], "%d", &y);

	printf("input image: %s\n", argv[1]);
	image = new class libbmp();
	image->open_image(argv[1]);
	image->dump_image_info();

	printf("\ntranslation (%d, %d)\n", x, y);
	image->translation(x, y);

	return 0;
}
