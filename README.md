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
2. Inside `charts_graphs_bluff` folder, locate the file `charts_graphs_bluff.class.inc` and edit.
3. Search the word `rsort` and changed it to `ksort`. (in this case, on line 295)
4. Put `water_level` and  `water_level_override` in modules\custom folder.
5. Download `bluff` library and put the contents in sites\all\libraries\bluff. The file `bluff-min.js` should be in sites\all\libraries\bluff.
6. Inside sites\all\libraries\bluff, copy `bluff-min.js` to the same folder and rename it to `bluff.js`.
7. Using drush, enable `charts_graphs_bluff`, `water_level`, `water_level_override`, `views`, `views_ui` to resolve any dependencies.
8. Clear all drupal cache.

Note
----
On the drupal `admin\reports\status`, ignore errors about the bluff libraris missing.
