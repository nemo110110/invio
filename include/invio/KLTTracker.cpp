/*
 * KLTTracker.cpp
 *
 *  Created on: Jan 3, 2018
 *      Author: kevin
 */

#include <KLTTracker.h>

KLTTracker::KLTTracker()
{
	// TODO Auto-generated constructor stub

}

KLTTracker::~KLTTracker()
{
	// TODO Auto-generated destructor stub
}

/*
 * the main klt tracker function
 * iteratively determines the new sub-pixel accurate feature positions in the new frame and estimates its covariance matrix
 */
void KLTTracker::findNewFeaturePositions(const Frame& lf, const Frame& cf, const std::vector<Eigen::Vector2f>& previous_feature_positions,
		const std::list<Feature>& estimated_new_feature_positions, std::vector<Eigen::Vector2f>& measured_positions,
		std::vector<Eigen::Matrix2f>& estimated_uncertainty, std::vector<bool>& passed)
{

}
