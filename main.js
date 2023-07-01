// Offset the scroll position when clicking on an ID link
document.addEventListener('click', function(event) {
    if (event.target.tagName === 'A' && event.target.getAttribute('href').startsWith('#')) {
      event.preventDefault();
      var targetId = event.target.getAttribute('href').substring(1);
      var targetElement = document.getElementById(targetId);
      if (targetElement) {
        var navbarHeight = document.querySelector('.navbar').offsetHeight;
        var targetPosition = targetElement.getBoundingClientRect().top + window.pageYOffset - navbarHeight;
        window.scrollTo({ top: targetPosition, behavior: 'smooth' });
        history.pushState(null, null, '#' + targetId);
      }
    }
  });
  