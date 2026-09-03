# KoiShiBox Dependencies

This private companion repository is the single Git dependency of the KoiShiBox engine.
It contains the source snapshots and small redistributable tools needed to prepare a
fresh engine clone without borrowing files from another checkout.

## Contract

- The engine pins this repository as its root `vendor` submodule.
- This repository contains no nested Git submodules.
- Vulkan SDK and the vcpkg executable remain machine-local.
- vcpkg installs GLFW into the engine clone's ignored `.deps/vcpkg_installed` tree.
- Donut is reference-only. It is not generated, compiled, or checked by engine READY.
- Large Donut media is optional and is described by `optional-inputs.json`; it is not
  stored here.
- ShaderMake source is isolated in `tools/ShaderMake`; its executable and shader output
  belong to the engine clone's ignored output directories.

`THIRD_PARTY.json` records the exact KoiShiBox import tree for every flattened snapshot.
An upstream revision is only claimed when it was preserved by the source history.
