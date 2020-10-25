# CONTENTS OF THIS FILE

* Introduction
* Requirements
* Recommended modules
* Installation
* Configuration
* Maintainers


# INTRODUCTION

**Views RSS: Media Elements** is an extension module for
[Views RSS][01] 2.x, providing additional set of [Media (MRSS)][02]
elements and field formatters.

For more information and reporting, please visit:

* For a description of the module, visit the [project page][03].
* For on-screen documentation, visit the [documentation page][04],
  or enable [**Advanced Help**][05].
* To submit bug reports and feature suggestions, or to track changes
  visit the project's [issue tracker][06].

Features:

It supports `image`, `file`, `video` and `video_embed_field` fields.

It provides the following set of feed item elements:

# REQUIREMENTS

The folllowing project and its depencies are required:

* [**Views RSS**][01]:
  Provides a fields-based views style plugin for RSS.

# RECOMMENDED MODULES

* [**Advanced Help Hint**][07]:
  Links help text provided by `hook_help` to online help and
  **Advanced Help**.
* [**Advanced Help**][05]:
  When this module is enabled, the project's `README.md` will be
  displayed when you visit `help/content_access/README.md`.
* [**getID3()**][08]:
  Provides additional arguments to `<media:content>` element for media
  files (bitrate, samplingrate, channels and duration for audio files,
  and bitrate, framerate, duration, width and height for video files).
* [**Markdown**][09]:
  When this module is enabled, display of the project's `README.md`
  will be rendered with the markdown filter.


# INSTALLATION

To install, do the following:

1. Install as you would normally install a contributed drupal
   module. See: [Installing modules][10] for further information.
2. Enable the **Views RSS: Media Elements** module on the *Modules* list
   page.


# CONFIGURATION

To start creating a new view for the feed, navigate to *Structure »
Views » Add new view*.

For more information about setting up the feed, see the
[online documentation][04].

# MAINTAINERS

* [maciej.zgadzaj][11].  
* [Gisle Hannemyr][12].

Any help with development (patches, reviews, comments) are welcome.


[01]: https://www.drupal.org/project/views_rss
[02]: https://www.rssboard.org/media-rss
[03]: https://www.drupal.org/project/views_rss_media
[04]: https://www.drupal.org/docs/7/modules/views-rss-media-mrss-elements
[05]: https://www.drupal.org/project/advanced_help
[06]: https://www.drupal.org/project/issues/views_rss_media
[07]: https://www.drupal.org/project/advanced_help_hint
[08]: https://www.drupal.org/project/getid3
[09]: https://www.drupal.org/project/markdown
[10]: https://www.drupal.org/docs/extending-drupal/installing-drupal-modules
[11]: https://www.drupal.org/u/maciejzgadzaj
[12]: https://www.drupal.org/u/gisle
