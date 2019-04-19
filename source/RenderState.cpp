/*
Copyright (C) 2019 Leeds Beckett Computer Science Society

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
#include <RenderState.h>
#include <glm.hpp>
#include <ext.hpp>
#include <Session.h>

void rrts::Graphics::RenderState::setShader(rrts::Graphics::Shader *instance)
{
	shaderInstance = instance;
}

rrts::Graphics::Shader *rrts::Graphics::RenderState::getShader()
{
	return shaderInstance;
}

void rrts::Graphics::RenderState::setTexture(rrts::Graphics::Texture *instance)
{
	textureInstance = instance;
}

rrts::Graphics::RenderState::RenderState()
{
//	model = glm::mat4(1.0f);
//	projection = glm::mat4(1.0f);
//	projection = glm::ortho( 0.0f, (float) rrts::User::Session::getInstance()->getWindowSize().Width, 0.0f,
//	                         (float)rrts::User::Session::getInstance()->getWindowSize().Height, 0.0f, 100.0f );
//	view = glm::mat4(1.0f);
//	view = glm::translate(view, glm::vec3(0.0f, 0.0f, 0.0f));
}