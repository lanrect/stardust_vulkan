////////////////////////////////////////////////////////////////////////////////
// Copyright 2017 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License.  You may obtain a copy
// of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
// License for the specific language governing permissions and limitations
// under the License.
////////////////////////////////////////////////////////////////////////////////

#version 450 core

out gl_PerVertex
{
  vec4 gl_Position;
};
layout(location = 0) out INVOCATION
{
  vec2 texcoord;
} vs_out;

void main(void)
{
  vec2 p[4] = vec2[](vec2(-1.0, 1.0), vec2(-1.0, -1.0), vec2(1.0, 1.0), vec2(1.0, -1.0));
  vec2 c[4] = vec2[](vec2(0.0, 0.0), vec2(0.0, 1.0), vec2(1.0, 0.0), vec2(1.0, 1.0));
  vec2 pos = p[gl_VertexIndex];
  gl_Position = vec4(pos, 0.0, 1.0);
  vs_out.texcoord = c[gl_VertexIndex];
}
