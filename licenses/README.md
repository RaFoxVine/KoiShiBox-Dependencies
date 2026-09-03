# License inventory

Source snapshots retain their upstream license files when those files existed in the
legacy KoiShiBox tree. The files in this directory fill the license gap for header-only,
binary-only, or machine-acquired components:

- `premake-LICENSE.txt` — Premake 5.0.0-beta1.
- `assimp-LICENSE` — Assimp v5.4.3 license text; the legacy binary snapshot itself is
  identified by SHA-256 in `THIRD_PARTY.json` because its original upstream revision was
  not retained.
- `entt-LICENSE` — EnTT v4.0.0.
- `glm-copying.txt` — GLM 1.0.3.
- `stb-LICENSE` — stb dual-license text.
- `glfw-LICENSE.md` — GLFW 3.4, acquired later through vcpkg.
