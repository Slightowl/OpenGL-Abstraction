/*
Copyright (C) 2019 Jack Martin

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.

*/
#ifndef RRTS_SQUARE_H
#define RRTS_SQUARE_H

#include <RenderTarget.h>
#include <VertexBuffer.h>

namespace rrts
{
    namespace Graphics
    {
        class Texture;

        /**
	 * @author jack martin
	 */
        class Square : public RenderTarget
	{
	public:
	    Square();

	private:
	    rrts::Graphics::VertexBufferArray vertexBufferArray;
	    rrts::Graphics::IndexBuffer indexBuffer;

	    void draw(RenderTarget &target, TargetRenderer &renderer) override;

	    rrts::Graphics::VertexBuffer vertexBuffer{};
	};
    }
}

#endif //RRTS_SQUARE_H
