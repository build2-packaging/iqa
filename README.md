# iqa - Image quality assessment C library

This is a `build2` package repository for
[`iqa`](https://github.com/tjdistler/iqa), a C library that implements
MSE, PSNR, SSIM, MS-SSIM, and MS-SSIM* image quality metrics.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`iqa` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](libiqa/PACKAGE-README.md) file.

The development setup for `iqa` uses the standard `bdep`-based workflow.
For example:

```
git clone --recurse-submodules https://github.com/build2-packaging/iqa.git
cd iqa

bdep init -C @gcc cc config.c=gcc
bdep update
bdep test
```
