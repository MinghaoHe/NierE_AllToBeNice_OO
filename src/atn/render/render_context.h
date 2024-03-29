//
// Created by minghaohe on 2023/1/17.
//

#ifndef NIERE_ALLTOBENICE_RANDER_RENDER_CONTEXT_H
#define NIERE_ALLTOBENICE_RANDER_RENDER_CONTEXT_H

#include <vector>

#include <3rdparty/glad/glad.h>
#include <3rdparty/glm/glm.hpp>

namespace atn {
namespace render {

struct RenderContext {
  // light
  glm::mat4 projection;
  glm::mat4 view;
};

struct TextureData {
  GLenum format;
  GLsizei width;
  GLsizei height;
  void* pixels;
};

struct ObjectRenderData {
  std::vector<GLfloat> vertices;
  std::vector<GLuint> indices;

  std::vector<TextureData> textures_data;
};

inline constexpr GLenum GL_TEXTURE_INDEX(int index) {
  switch (index) {
    case 0:
      return GL_TEXTURE0;
    case 1:
      return GL_TEXTURE1;
    case 2:
      return GL_TEXTURE2;
    case 3:
      return GL_TEXTURE3;
    case 4:
      return GL_TEXTURE4;
    case 5:
      return GL_TEXTURE5;
    case 6:
      return GL_TEXTURE6;
    case 7:
      return GL_TEXTURE7;
    case 8:
      return GL_TEXTURE8;
    case 9:
      return GL_TEXTURE9;
    case 10:
      return GL_TEXTURE10;
    case 11:
      return GL_TEXTURE11;
    case 12:
      return GL_TEXTURE12;
    case 13:
      return GL_TEXTURE13;
    case 14:
      return GL_TEXTURE14;
    case 15:
      return GL_TEXTURE15;
    case 16:
      return GL_TEXTURE16;
    case 17:
      return GL_TEXTURE17;
    case 18:
      return GL_TEXTURE18;
    case 19:
      return GL_TEXTURE19;
    case 20:
      return GL_TEXTURE20;
    case 21:
      return GL_TEXTURE21;
    case 22:
      return GL_TEXTURE22;
    case 23:
      return GL_TEXTURE23;
    case 24:
      return GL_TEXTURE24;
    case 25:
      return GL_TEXTURE25;
    case 26:
      return GL_TEXTURE26;
    case 27:
      return GL_TEXTURE27;
    case 28:
      return GL_TEXTURE28;
    case 29:
      return GL_TEXTURE29;
    case 30:
      return GL_TEXTURE30;
    case 31:
      return GL_TEXTURE31;
    default:
      return 0;
  }
}

inline constexpr const char* TEXTURE_NAME(int index) {
  switch (index) {
    case 0:
      return "texture0";
    case 1:
      return "texture1";
    case 2:
      return "texture2";
    case 3:
      return "texture3";
    case 4:
      return "texture4";
    case 5:
      return "texture5";
    case 6:
      return "texture6";
    case 7:
      return "texture7";
    case 8:
      return "texture8";
    case 9:
      return "texture9";
    case 10:
      return "texture10";
    case 11:
      return "texture11";
    case 12:
      return "texture12";
    case 13:
      return "texture13";
    case 14:
      return "texture14";
    case 15:
      return "texture15";
    case 16:
      return "texture16";
    case 17:
      return "texture17";
    case 18:
      return "texture18";
    case 19:
      return "texture19";
    case 20:
      return "texture20";
    case 21:
      return "texture21";
    case 22:
      return "texture22";
    case 23:
      return "texture23";
    case 24:
      return "texture24";
    case 25:
      return "texture25";
    case 26:
      return "texture26";
    case 27:
      return "texture27";
    case 28:
      return "texture28";
    case 29:
      return "texture29";
    case 30:
      return "texture30";
    case 31:
      return "texture31";
    default:
      return "";
  }
}

enum class FrameIndex {
  kMain = 0,
  kBloom,
  kMax
};

}  // namespace render
}  // namespace atn

#endif  // NIERE_ALLTOBENICE_RANDER_RENDER_CONTEXT_H
