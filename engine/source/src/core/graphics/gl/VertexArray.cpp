#include <quartz/core/QuartzPCH.hpp>
#include <quartz/core/graphics/gl/VertexArray.hpp>

using namespace qz::gfx::gl;

VertexArray::VertexArray() : m_arrayID(0)
{
	GLCheck(glGenVertexArrays(1, &m_arrayID));
}

void VertexArray::bind() const
{
	GLCheck(glBindVertexArray(m_arrayID));
}

void VertexArray::unbind() const
{
	GLCheck(glBindVertexArray(0));
}

VertexArray::~VertexArray()
{
	GLCheck(glDeleteVertexArrays(1, &m_arrayID));
}