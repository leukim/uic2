USERNAME = "";

$(function () {
	$("#login-submit").click(function () {
		if ($("#login-username").prop('value') === "") {
			$("#login-error").text("Please enter a username");
		} else {
			USERNAME = $("#login-username").prop('value');
			$.mobile.navigate("#page-content");
		}
	});
});
