# tic.drat

[![Travis build status](https://img.shields.io/travis/ropenscilabs/tic.drat/master?logo=travis&style=flat-square&label=Linux)](https://travis-ci.com/ropenscilabs/tic.drat)
[![Build status](https://ci.appveyor.com/api/projects/status/11qom8mm4v7yi85b?svg=true)](https://ci.appveyor.com/project/ropenscilabs/tic-drat)
[![Coverage Status](https://codecov.io/gh/ropenscilabs/tic.drat/branch/master/graph/badge.svg)](https://codecov.io/github/ropenscilabs/tic.drat?branch=master)

A minimal example for a [_drat_ repository](https://github.com/ropenscilabs/tic.drat.repo) created and uploaded by {tic}, hosting source and binary macOS packages.
{tic} is an R package for CI-agnostic workflow definitions for various R projects. 
See its [documentation](https://ropenscilabs.github.io/tic/) for more information.

The magic of this example package comes from the macro `tic::do_drat()` which is being called in `tic.R`.
By default, binaries are only build and pushed for non-dev versions to keep the drat repo size small.
Consult the [vignettes](https://docs.ropensci.org/tic/) of the {tic} package for more details.

## Differences to a conventional CI setup

Only a few files need to be added or changed to enable integration with {tic}:

- [`tic.R`](tic.R): This file describes the CI workflow.
- [`.travis.yml`](.travis.yml): This file translates between CI stages of Travis CI and {tic} stages.
- [`appveyor.yml`](appveyor.yml): This file translates between CI stages of AppVeyor and {tic} stages.
- [`.Rbuildignore`](.Rbuildignore): The listed files should not be part of the R package building process and must be excluded.

## Set up an operational fork of this repository

If you want to experiment with _travis_ and {tic} for a _drat_ project, you can fork it.

1. Use `usethis::create_from_github()` to automatically create a fork of this repo.
    If you use RStudio, a new RStudio project will open. 
    You may need to set up your SSH credentials first. 
    See [this guide](http://happygitwithr.com/ssh-keys.html) if you're having problems. 
    (It's definitely worth getting this function running as it saves you a lot of time in the future!) 
    Alternatively, fork this repo on Github and then create a new R Project within RStudio (File -> New Project -> Version Control -> Github). 
1. Run `tic::use_tic()` to set up all requirements needed for the CI integration of your package.
