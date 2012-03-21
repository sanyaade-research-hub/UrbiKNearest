// UKNearest is a module for Urbi to handle K-Nearest algorithm
// implemented in OpenCV
// Copyright (C) 2012 Adam Oleksy

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <string>

#include <urbi/uobject.hh>

#include <boost/scoped_ptr.hpp>

#include <opencv/ml.h>

class UKNearest : public urbi::UObject {
public:
	UKNearest(const std::string&);
	~UKNearest();

	void init();

private:
	boost::scoped_ptr<cv::KNearest> knn;
};

inline UKNearest::UKNearest(const std::string &s) : urbi::UObject(s), knn(NULL) {
	UBindFunction(UKNearest, init);
}

UStart(UKNearest);
