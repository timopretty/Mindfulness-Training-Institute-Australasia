{module_webapps render="collection" id="Event Bookings" filter="classified" itemId="53317" targetFrame="" resultsPerPage="" hideEmptyMessage="false" rowCount="" sortType="" collection="eventBookings" template=""}
{% for eventBookingsContent in eventBookings.items %}
	{% if eventBookings.items -%}		
		<div class="event-list clear">
			{% if eventBookingsContent['Small Image'] != "" -%}
				<a href="https://mtia.worldsecuresystems.com{{eventBookingsContent.url}}" title="{{eventBookingsContent.name}}"><img src="{{eventBookingsContent.['Small Image']}}" title="{{eventBookingsContent.name}}" alt="{{eventBookingsContent.name}}" height="126" width="126" border="0" /></a>
			{% endif -%}
			<div class="event-list-details">
				<h2>{{eventBookingsContent.name}}</h2>
				{% if eventBookingsContent['Price'] != "" -%}
					<p><strong>Cost:</strong> {% if eventBookingsContent['Registration Open'] != "No" -%}${% endif -%}{{eventBookingsContent.['Price']}}</p>
				{% endif -%}
				{% if eventBookingsContent['Dates'] != "" -%}
					<p><strong>Dates:</strong> {{eventBookingsContent.['Dates']}}</p>
				{% endif -%}
				<a href="https://mtia.worldsecuresystems.com{{eventBookingsContent.url}}" class="btn btn-primary" title="View event">View Event</a>
			</div>			
		</div>	
	{% endif -%}
{% endfor -%}
<br /><br /><br />