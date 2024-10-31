# Simple Browser Navigation
<p>This <strong>Simple Browser Navigation System</strong> is a C console application that mimics basic browser functionality. Users can navigate to different pages (URLs), view the current page, and move back and forth between pages.</p>
    <h2>Features</h2>
    <ul>
        <li><strong>Page Navigation:</strong> Users can "visit" a new URL, which is then stored in the program's stack.</li>
        <li><strong>Back and Forward Navigation:</strong> Users can move to previously or next visited pages, as long as they exist in the stack.</li>
        <li><strong>Memory Management:</strong> If more than 10 pages are visited, the oldest page is removed to accommodate new pages.</li>
        <li><strong>Current Page Display:</strong> Users can check which page they are currently viewing.</li>
    </ul>
    <h2>Code Structure</h2>
    <ul>
        <li><strong>Main Functions</strong>
            <ul>
                <li><code>push()</code>: Adds a new URL to the navigation stack, removing the oldest if the stack limit (10) is exceeded.</li>
                <li><code>show_current()</code>: Displays the currently viewed page.</li>
                <li><code>back_button()</code>: Navigates to the previous page, if available.</li>
                <li><code>forward_button()</code>: Navigates to the next page, if available.</li>
            </ul>
        </li>
        <li><strong>Main Loop</strong>: Offers users a menu with options for navigation and page viewing.</li>
    </ul>
    <div class="divider"></div>
    <h2>Getting Started</h2>
    <h3>Prerequisites</h3>
    <p>A C compiler, such as GCC, is required to compile and run the code.</p>
    <h3>Running the Program</h3>
    <ol>
        <li>Clone the repository.</li>
        <li>Compile the program:
            <pre><code>gcc browser_navigation.c -o browser_navigation</code></pre>
        </li>
        <li>Run the program:
            <pre><code>./browser_navigation</code></pre>
        </li>
    </ol>
    <h3>Usage</h3>
    <p>Upon running, the program will prompt the user with several options:</p>
    <ul>
        <li><code>w</code>: Visit a new page (add a URL to the stack)</li>
        <li><code>c</code>: Show the current page</li>
        <li><code>b</code>: Move back to the previous page</li>
        <li><code>f</code>: Move forward to the next page</li>
        <li><code>e</code>: Exit the browser</li>
    </ul>
    <h2>Example Output</h2>
<p><img width="331" alt="p1" src="https://github.com/user-attachments/assets/c32dce3f-4bd8-4e70-a490-aa1eb96e6732"></p>
<p><img width="338" alt="p2" src="https://github.com/user-attachments/assets/7a2b511f-9173-4615-8111-e6a19c619fd1"></p>
<p><img width="333" alt="p3" src="https://github.com/user-attachments/assets/6c4072a0-20a6-4325-8bb6-7813dbddaf58"></p>
<p><img width="324" alt="p5" src="https://github.com/user-attachments/assets/0151d10d-074f-43de-9830-94ef2671bbf3"></p>
    <h2>Limitations</h2>
    <ul>
        <li>Only stores the last 10 URLs, removing the oldest if exceeded.</li>
        <li>No persistence after program termination.</li>
    </ul>
    
