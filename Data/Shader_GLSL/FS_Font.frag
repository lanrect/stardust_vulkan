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

precision highp float;

layout(location = 0) in INVOCATION
{
  vec2 texcoord;
} fs_in;

layout(binding = 5) uniform sampler2D g_font_texture;

layout(location = 0) out vec4 fs_out_color;

void main(void)
{
  float c = texture(g_font_texture, fs_in.texcoord).r;
  fs_out_color = vec4(c, c, c, 1.0);
}
