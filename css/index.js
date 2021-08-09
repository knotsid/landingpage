function changeColors ()
{
  var x= Math.floor((Math.random() * 9) + 1);
  var style = 'css/'+ x + '.css'
  document.getElementById('theme').href = style;
  
}