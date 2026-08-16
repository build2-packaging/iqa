# libiqa - Image quality assessment C library

This is a `build2` package for the [`iqa`](https://github.com/tjdistler/iqa)
C library. It implements MSE, PSNR, SSIM, MS-SSIM, and MS-SSIM* metrics
for 8-bit images.


## Usage

To start using `libiqa` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libiqa ^1.1.2
```

Then import the library in your `buildfile`:

```
import libs = libiqa%lib{iqa}
```

The canonical public header is `<iqa/iqa.h>`. The unqualified form
`<iqa.h>` is also accepted (via `pkg-config` include paths).


## Configuration variables

This package has no configuration variables.
