# KoiShiBox Dependencies

这是引擎唯一的 dependency submodule。引擎 gitlink 固定精确 commit，使用者取得该版本即可获得源码和所需 Windows SDK/tool，不需要配置或运行 vcpkg。

- GLFW 3.4 的官方 Windows x64 dynamic SDK 位于 `glfw/`，供桌面构建使用。
- DXC v1.9.2602 的官方 x64 编译器与配套 DLL 位于 `tools/DXC/windows-x64/`，CPU Shader 编译无需 Vulkan SDK。
- 桌面仍需机器提供 Vulkan SDK；Headless 不使用 Vulkan/GLFW。机器 SDK、下载缓存和引擎生成物不存入本仓库。
- ShaderMake 源码位于 `tools/ShaderMake/`，其可执行产物和 Shader 输出由引擎构建，保存在引擎 ignored 输出目录。
- 本仓库没有 nested gitlink。Donut 仅供只读研究，不参加构建或 READY；可选大媒体由 `optional-inputs.json` 描述。

版本、原包 URL/hash、选取文件的原始 hash、许可证与 import tree 由 `THIRD_PARTY.json` 保存。官方 SDK 文件保持原字节，不做行为补丁。只有有证据的源码快照才声明 upstream revision。
