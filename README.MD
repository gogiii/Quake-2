## Quake 2 test opengl renderer
This is a simple pet-project for testing and educational purposes.
### Goals:
 - Track quake 2 source code changes starting at v19 official fork in master branch (currently v19-v21, missing v20);
 - Apply Knightmare's unofficial v24 patch;
 - Remove old hardware compatibility code (voodoo, legacy workarounds, etc);
 - Remove texture based dynamic lightmapping in order to use any modern techniques like multipass attenuation mapping or deferred lighting (in progress);
### Future goals:
 - Implement any shadowing techniques like stencil shadow volumes or depth shadow mapping;
 - Remove static lightmapping support and use dynamic lighting only;
 - Implement automatic generation of point lights at LIGHT-marked texture meshes and sky lighting;
 - Try voxel-based GI?
 - ...
