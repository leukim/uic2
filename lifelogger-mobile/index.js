USERNAME = "";

$(function () {
	$("#login-submit").click(function () {
		if ($("#login-username").prop('value') === "") {
			$("#login-error").text("Please enter a username");
		} else {
			USERNAME = $("#login-username").prop('value');
			$.mobile.navigate("#page-content");
			$("#login-username").prop('value', '');
			$("#username").text(USERNAME);
		}
	});
	
	$("#sleep-switch").click(function () {
		if ($("#sleep-switch").hasClass("ui-btn-b")) { // Start sleep
			$("#sleep-switch").removeClass("ui-btn-b");
			$("#sleep-switch").text("Stop sleeping");
			$("#sleep-notice").text("Recording sleep...");
			$("#sleep-info").text("");
		} else { // Stop sleep
			$("#sleep-switch").addClass("ui-btn-b");
			$("#sleep-switch").text("Start sleeping");
			$("#sleep-notice").text("");
			$("#sleep-info").text("Sleep registered");
		}
	});
	
	$("#button-logout").click(function () {
		$.mobile.navigate("#page-login");
		USERNAME = "";
	});
	
	$("#button-comeback").click(function () {
		$.mobile.navigate("#page-content");
		USERNAME = "";
		$("#page-moves-start").removeClass("hidden");
		$("#img-finalroute").addClass("hidden");
		$("#text-finalroute").addClass("hidden");
	});
	
	$("#moves-live").click(function () {
		$.mobile.navigate("#page-moves");
	});
	
	$("#page-moves-start").click(function () {
		$("#page-moves-start").addClass("hidden");
		$("#page-moves-stop").removeClass("hidden");
		$("#text-recording").removeClass("hidden");
	});
	
	$("#page-moves-stop").click(function () {
		$("#img-finalroute").removeClass("hidden");
		$("#page-moves-stop").addClass("hidden");
		$("#text-recording").addClass("hidden");
		$("#text-finalroute").removeClass("hidden");
	});
});
