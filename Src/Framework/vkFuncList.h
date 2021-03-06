/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2017 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
/////////////////////////////////////////////////////////////////////////////////////////////

#if defined(_VK_GLOBAL_FUNCTIONS) || defined(_VK_ALL_FUNCTIONS)
VK_FUNCTION(vkCreateInstance);
VK_FUNCTION(vkEnumerateInstanceExtensionProperties);
VK_FUNCTION(vkEnumerateInstanceLayerProperties);
VK_FUNCTION(vkDestroyInstance);
VK_FUNCTION(vkGetInstanceProcAddr);
#endif

#if defined(_VK_INSTANCE_FUNCTIONS) || defined(_VK_ALL_FUNCTIONS)
VK_FUNCTION(vkEnumeratePhysicalDevices);
VK_FUNCTION(vkGetPhysicalDeviceFeatures);
VK_FUNCTION(vkGetPhysicalDeviceFormatProperties);
VK_FUNCTION(vkGetPhysicalDeviceProperties);
VK_FUNCTION(vkGetPhysicalDeviceQueueFamilyProperties);
VK_FUNCTION(vkGetPhysicalDeviceMemoryProperties);
VK_FUNCTION(vkGetDeviceProcAddr);
VK_FUNCTION(vkCreateDevice);
VK_FUNCTION(vkDestroyDevice);

VK_FUNCTION(vkEnumerateDeviceExtensionProperties);
VK_FUNCTION(vkEnumerateDeviceLayerProperties);

// VK_KHR_surface
VK_FUNCTION(vkDestroySurfaceKHR);
VK_FUNCTION(vkGetPhysicalDeviceSurfaceSupportKHR);
VK_FUNCTION(vkGetPhysicalDeviceSurfaceCapabilitiesKHR);
VK_FUNCTION(vkGetPhysicalDeviceSurfaceFormatsKHR);
VK_FUNCTION(vkGetPhysicalDeviceSurfacePresentModesKHR);

#ifdef VK_USE_PLATFORM_WIN32_KHR
// VK_KHR_win32_surface
VK_FUNCTION(vkCreateWin32SurfaceKHR);
VK_FUNCTION(vkGetPhysicalDeviceWin32PresentationSupportKHR);
#endif

#ifdef VK_USE_PLATFORM_XCB_KHR
// VK_KHR_xcb_surface
VK_FUNCTION(vkCreateXcbSurfaceKHR)
VK_FUNCTION(vkGetPhysicalDeviceXcbPresentationSupportKHR);
#endif

#ifdef VK_USE_PLATFORM_ANDROID_KHR
// VK_KHR_android_surface
VK_FUNCTION(vkCreateAndroidSurfaceKHR);
#endif

#if ENABLE_DEBUG_REPORT
VK_FUNCTION(vkCreateDebugReportCallbackEXT);
VK_FUNCTION(vkDestroyDebugReportCallbackEXT);
#endif
#endif

#if defined(_VK_DEVICE_FUNCTIONS) || defined(_VK_ALL_FUNCTIONS)
VK_FUNCTION(vkGetDeviceQueue);
VK_FUNCTION(vkQueueSubmit);
VK_FUNCTION(vkQueueWaitIdle);
VK_FUNCTION(vkDeviceWaitIdle);
VK_FUNCTION(vkAllocateMemory);
VK_FUNCTION(vkFreeMemory);
VK_FUNCTION(vkMapMemory);
VK_FUNCTION(vkUnmapMemory);
VK_FUNCTION(vkFlushMappedMemoryRanges);
VK_FUNCTION(vkInvalidateMappedMemoryRanges);
VK_FUNCTION(vkBindBufferMemory);
VK_FUNCTION(vkBindImageMemory);
VK_FUNCTION(vkGetImageMemoryRequirements);
VK_FUNCTION(vkGetBufferMemoryRequirements);
VK_FUNCTION(vkQueueBindSparse);
VK_FUNCTION(vkCreateFence);
VK_FUNCTION(vkResetFences);
VK_FUNCTION(vkGetFenceStatus);
VK_FUNCTION(vkWaitForFences);
VK_FUNCTION(vkCreateSemaphore);
VK_FUNCTION(vkCreateEvent);
VK_FUNCTION(vkGetEventStatus);
VK_FUNCTION(vkSetEvent);
VK_FUNCTION(vkResetEvent);
VK_FUNCTION(vkCreateQueryPool);
VK_FUNCTION(vkGetQueryPoolResults);
VK_FUNCTION(vkCreateBuffer);
VK_FUNCTION(vkCreateBufferView);
VK_FUNCTION(vkCreateImage);
VK_FUNCTION(vkGetImageSubresourceLayout);
VK_FUNCTION(vkCreateImageView);
VK_FUNCTION(vkCreateShaderModule);
VK_FUNCTION(vkCreatePipelineCache);
VK_FUNCTION(vkGetPipelineCacheData);
VK_FUNCTION(vkMergePipelineCaches);
VK_FUNCTION(vkCreateGraphicsPipelines);
VK_FUNCTION(vkCreateComputePipelines);
VK_FUNCTION(vkCreatePipelineLayout);
VK_FUNCTION(vkCreateSampler);
VK_FUNCTION(vkCreateDescriptorSetLayout);
VK_FUNCTION(vkCreateDescriptorPool);
VK_FUNCTION(vkResetDescriptorPool);
VK_FUNCTION(vkAllocateDescriptorSets);
VK_FUNCTION(vkFreeDescriptorSets);
VK_FUNCTION(vkUpdateDescriptorSets);
VK_FUNCTION(vkAllocateCommandBuffers);
VK_FUNCTION(vkBeginCommandBuffer);
VK_FUNCTION(vkEndCommandBuffer);
VK_FUNCTION(vkResetCommandBuffer);
VK_FUNCTION(vkCreateCommandPool);
VK_FUNCTION(vkDestroyFence);
VK_FUNCTION(vkDestroySemaphore);
VK_FUNCTION(vkDestroyEvent);
VK_FUNCTION(vkDestroyQueryPool);
VK_FUNCTION(vkDestroyBuffer);
VK_FUNCTION(vkDestroyBufferView);
VK_FUNCTION(vkDestroyImage);
VK_FUNCTION(vkDestroyImageView);
VK_FUNCTION(vkDestroyShaderModule);
VK_FUNCTION(vkDestroyPipelineCache);
VK_FUNCTION(vkDestroyPipeline);
VK_FUNCTION(vkDestroyPipelineLayout);
VK_FUNCTION(vkDestroySampler);
VK_FUNCTION(vkDestroyDescriptorSetLayout);
VK_FUNCTION(vkDestroyDescriptorPool);
VK_FUNCTION(vkDestroyFramebuffer);
VK_FUNCTION(vkDestroyRenderPass);
VK_FUNCTION(vkFreeCommandBuffers);
VK_FUNCTION(vkDestroyCommandPool);
VK_FUNCTION(vkCmdBindPipeline);
VK_FUNCTION(vkCmdSetViewport);
VK_FUNCTION(vkCmdSetScissor);
VK_FUNCTION(vkCmdSetLineWidth);
VK_FUNCTION(vkCmdSetDepthBias);
VK_FUNCTION(vkCmdSetBlendConstants);
VK_FUNCTION(vkCmdSetDepthBounds);
VK_FUNCTION(vkCmdSetStencilCompareMask);
VK_FUNCTION(vkCmdSetStencilWriteMask);
VK_FUNCTION(vkCmdSetStencilReference);
VK_FUNCTION(vkCmdBindDescriptorSets);
VK_FUNCTION(vkCmdBindIndexBuffer);
VK_FUNCTION(vkCmdBindVertexBuffers);
VK_FUNCTION(vkCmdDraw);
VK_FUNCTION(vkCmdDrawIndexed);
VK_FUNCTION(vkCmdDrawIndirect);
VK_FUNCTION(vkCmdDrawIndexedIndirect);
VK_FUNCTION(vkCmdDispatch);
VK_FUNCTION(vkCmdDispatchIndirect);
VK_FUNCTION(vkCmdCopyBuffer);
VK_FUNCTION(vkCmdCopyImage);
VK_FUNCTION(vkCmdBlitImage);
VK_FUNCTION(vkCmdCopyBufferToImage);
VK_FUNCTION(vkCmdCopyImageToBuffer);
VK_FUNCTION(vkCmdUpdateBuffer);
VK_FUNCTION(vkCmdFillBuffer);
VK_FUNCTION(vkCmdClearColorImage);
VK_FUNCTION(vkCmdClearAttachments);
VK_FUNCTION(vkCmdClearDepthStencilImage);
VK_FUNCTION(vkCmdResolveImage);
VK_FUNCTION(vkCmdSetEvent);
VK_FUNCTION(vkCmdResetEvent);
VK_FUNCTION(vkCmdWaitEvents);
VK_FUNCTION(vkCmdPipelineBarrier);
VK_FUNCTION(vkCmdBeginQuery);
VK_FUNCTION(vkCmdEndQuery);
VK_FUNCTION(vkCmdResetQueryPool);
VK_FUNCTION(vkCmdWriteTimestamp);
VK_FUNCTION(vkCmdCopyQueryPoolResults);
VK_FUNCTION(vkCreateFramebuffer);
VK_FUNCTION(vkCreateRenderPass);
VK_FUNCTION(vkCmdBeginRenderPass);
VK_FUNCTION(vkCmdEndRenderPass);
VK_FUNCTION(vkCmdExecuteCommands);
VK_FUNCTION(vkCmdPushConstants);

// VK_KHR_swapchain
VK_FUNCTION(vkCreateSwapchainKHR);
VK_FUNCTION(vkDestroySwapchainKHR);
VK_FUNCTION(vkGetSwapchainImagesKHR);
VK_FUNCTION(vkAcquireNextImageKHR);
VK_FUNCTION(vkQueuePresentKHR);

#endif