/*
|_______________________|
|_______________________|  ChartJS C++ Examples
|_______________________|  
|_______________________|  https://github.com/efernea/chartjs-cpp
Licensed under the MIT License <http://opensource.org/licenses/MIT>.
SPDX-License-Identifier: MIT
Copyright (c) 2020-2021 Eugen Fernea <http://mirafx.com>.
Permission is hereby  granted, free of charge, to any  person obtaining a copy
of this software and associated  documentation files (the "Software"), to deal
in the Software  without restriction, including without  limitation the rights
to  use, copy,  modify, merge,  publish, distribute,  sublicense, and/or  sell
copies  of  the Software,  and  to  permit persons  to  whom  the Software  is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE  IS PROVIDED "AS  IS", WITHOUT WARRANTY  OF ANY KIND,  EXPRESS OR
IMPLIED,  INCLUDING BUT  NOT  LIMITED TO  THE  WARRANTIES OF  MERCHANTABILITY,
FITNESS FOR  A PARTICULAR PURPOSE AND  NONINFRINGEMENT. IN NO EVENT  SHALL THE
AUTHORS  OR COPYRIGHT  HOLDERS  BE  LIABLE FOR  ANY  CLAIM,  DAMAGES OR  OTHER
LIABILITY, WHETHER IN AN ACTION OF  CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE  OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#include "../include/efernea/chartjs-cpp.hpp"

bool chartjscpp_example(){
    efernea::ChartJsCpp chartjscpp("chartjs_cpp_example.html", "ChartJs C++ Examples", "60%");
    chartjscpp
    .Html("<center>")
    .Html("<h1>ChartJs C++ Examples</h1>")
    .Html("<h2>Line</h2>")
    .Chart<int>("Line", {10,20,30,40,50,60,70,80})
        .DataSet<double>("Series 1", "line", "dd6644", {5.4,3.2,3.7,8.4,1.5,6.9,4.7,3.8})
        .DataSet<double>("Series 2", "line", "7766aa", {15.4,13.2,13.7,18.4,11.5,6.9,14.7,3.8}, false, "pointRadius: 0")
    .Html("<h2>Bar</h2>")
    .Chart<int>("Bar", {1,2,3,4,5,6,7,8})
        .DataSet<double>("Series 1", "bar", "dd6644", {5.4,3.2,3.7,8.4,1.5,6.9,4.7,3.8})
        .DataSet<double>("Series 2", "bar", "7766aa", {15.4,13.2,13.7,18.4,11.5,6.9,14.7,3.8})
    .Html("<h2>Radar</h2>")
    .Chart<int>("Radar", { 1,2,3,4,5,6,7,8 })
        .DataSet<double>("Series 1", "radar", "dd6644", { 5.4,3.2,3.7,8.4,1.5,6.9,4.7,3.8 })
        .DataSet<double>("Series 2", "radar", "7766aa", { 15.4,13.2,13.7,18.4,11.5,6.9,14.7,3.8 })
    .Html("<h2>Pie</h2>")
    .Chart<std::string>("Pies", { "a", "b", "c" })
        .DataSet<double>("Series 1", "pie", "dd6644", { 100, 10, 300 }, true)
    .Html("<h2>Polar area</h2>")
    .Chart<int>("Polar area", { 1,2,3,4,5,6,7,8 })
        .DataSet<double>("Series 1", "polarArea", "dd6644", { 5.4,3.2,3.7,8.4,1.5,6.9,4.7,3.8 })
        .DataSet<double>("Series 2", "polarArea", "7766aa", { 15.4,13.2,13.7,18.4,11.5,6.9,14.7,3.8 })
    .Html("<h2>Bubble</h2>")
    .Chart<int>("Bubble", { 1,2,3,4,5,6,7,8 })
        .DataSet<double>("Series 1", "bubble", "dd6644", { 5.4,3.2,23.7,8.4,1.5,26.9,4.7,3.8,19 })
        .DataSet<double>("Series 2", "bubble", "7766aa", { 15.4,13.2,53.7,18.4,11.5,6.9,14.7,3.8,62 })
    .Html("<h2>Scatter</h2>")
    .Chart<int>("Scatter", { 1,2,3,4,5,6,7,8 })
        .DataSet<double>("Series 1", "scatter", "dd6644", { 5.4,3.2,3.7,8.4,1.5,6.9,4.7,3.8 })
        .DataSet<double>("Series 2", "scatter", "7766aa", { 15.4,13.2,13.7,18.4,11.5,6.9,14.7,3.8 })
    .Html("<h2>Mixed</h2>")
    .Chart<int>("Mixed", {1,2,3,4,5,6,7,8})
        .DataSet<double>("Series 1", "line", "dd6644", {5.4,3.2,3.7,8.4,1.5,6.9,4.7,3.8}, false, "borderWidth: 3")
        .DataSet<double>("Series 2", "bar", "7766aa", {15.4,13.2,13.7,18.4,11.5,6.9,14.7,3.8}, false)
        ;

    size_t seriesSize = 5000;
    std::vector<int> labels(seriesSize, 0);
    std::vector<int> values(seriesSize, 0);
    for(size_t i=0; i< seriesSize; ++i){
        labels[i] = i+1000;
        values[i] = rand() % 100;
    }
    chartjscpp
        .Html("<h2>Large series</h2>")
        .Chart<int>("LargeSeries", labels)
        .DataSet<int>("Series 1", "line", "dd6644", values, false, "pointRadius: 0");
    return true;
}


int main()
{
    chartjscpp_example();
   
}
