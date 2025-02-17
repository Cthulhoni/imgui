

#include "imgui_internal.h"
#include <SDL.h>

#define RENDER_FN(name)                                                 \
  void name(ImGuiContext* context_p, SDL_Window* window_p)

typedef RENDER_FN(renderF);
