## about module for weewx skins
## Copyright Tom Keffer, Matthew Wall
## See LICENSE.txt for your rights
#errorCatcher Echo
#encoding UTF-8

<div id='about_widget' class="widget">
  <div class="widget_title">
    Σχετικά με τον Σταθμό
    <a class="widget_control"
      onclick="toggle_widget('about')">&diams;</a>
  </div>
  <div class="widget_contents">
  <table>
    <tr>
      <td class="label">Τύπος ΜΣ</td>
      <td class="data">$station.hardware</td>
    </tr>
    <tr>
      <td class="label">Β. Πλάτος</td>
      <td class="data">$station.latitude[0]&deg; $station.latitude[1]' $station.latitude[2]</td>
    </tr>
    <tr>
      <td class="label">Α. Μήκος</td>
      <td class="data">$station.longitude[0]&deg; $station.longitude[1]' $station.longitude[2]</td>
    </tr>
    <tr>
      <td class="label">Υψόμετρο</td>
      <td class="data">$station.altitude</td>
    </tr>
    <tr>
      <td class="label">Server Ανοικτός</td>
      <td class="data">$station.os_uptime</td>
    </tr>
    <tr>
      <td class="label">WeeWX Ανοικτό</td>
      <td class="data">$station.uptime</td>
    </tr>
    <tr>
      <td class="label">WeeWX Εκδοση</td>
      <td class="data">$station.version</td>
    </tr>
  </table>
  </div>

</div>