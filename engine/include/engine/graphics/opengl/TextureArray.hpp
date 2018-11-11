#pragma once

#include "engine/common.hpp"

#include "engine/graphics/opengl/opengl.hpp"

#include <unordered_map>

namespace phx
{
	namespace gfx
	{
		namespace gl
		{
			using TexCache = std::unordered_map<std::string, int>;

			class TextureArray
			{
			public:
				TextureArray();
				~TextureArray();

				
				void add(const std::vector<std::string>& paths);
				void add(const std::string& path);

				void bind(int index = -1);
				void unbind();

				const TexCache& getTextureList() { return m_texNames; }
				int getTexLayer(const std::string& path);

			private:
				TexCache m_texNames;

				unsigned int m_textureID;
				int m_textureNumber = 0;
			};

		}
	}
}