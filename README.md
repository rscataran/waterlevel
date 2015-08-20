# waterlevel
A Drupal module that display the water level in a graphical way.

Dependencies
------------

* date
* features
* number
* quicktabs
* text
* views
* views_charts
* water_level_override

* bluff - http://bluff.jcoglan.com/

Installation
------------

1. Put `charts_graphs_bluff` in modules\contrib folder.
2. Put `water_level` and  `water_level_override` in modules\custom folder.
3. Download `bluff` library and put the contents in sites\all\libraries\bluff. The file `bluff-min.js` shold be in sites\all\libraries\bluff.
4. Inside sites\all\libraries\bluff, copy `bluff-min.js` to the same folder and rename it to `bluff.js`.
5. Using drush, enable `charts_graphs_bluff`, `water_level`, `water_level_override`, `views_ui` to resolve any dependencies.
6. Clear all drupal cache.

Note
----
On the drupal `admin\reports\status`, ignore errors about the bluff libraris missing.
